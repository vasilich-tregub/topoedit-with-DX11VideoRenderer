# topoedit-with-DX11VideoRenderer
A README section Run the Sample on a DirectX video rendering sample, DX11VideoRenderer, 
from the Microsoft repository "Windows-classic-samples", promises the appearance of 
the menu line "Add DX11 Video Renderer" on the Topology menu of the topoedit application 
after registration of the DX11VideoRenderer.dll. Not only I do not see this menu line, I 
fail to find the code in the topoedit sample of the Microsoft repository 
"Windows-classic-samples" that would result in the appearance of such a menu line.

To add the DX11VideoRenderer to a list of video renderers available to topoedit (which, 
in the Microsoft repository, is limited only to EVR), I added the necessary code to the 
topoedit sample. Mainly, I replicated the code used to add the EVR sink node, starting 
from the method OnAddEVRSink, with 
necessary adjustments in the CTedVideoOutputNode::InitDX11(...) methods added to enable 
use of DX11VideoRenderer. The method CTedVideoOutputNode::Init(...) working 
with EVR uses a MFCreateVideoRendererActivate method (<mfidl.h> header); 
DX11VideoRenderer is activated with an ActivateObject method of the IMFActivate object 
that we get with the CreateDX11VideoRendererActivate method exported from 
DX11VideoRenderer.dll. To simplify the use of DX11VideoRenderer.dll, I added the 
DX11VideoRenderer project to my solution and use DX11VideoRenderer.dll without 
registration. One can easily return to CoCreateInstance, if necessary.

The DX11VideoRenderer code is 'as is' in the Microsoft repository, although it might 
be useful to remove a line MFTRegister(CLSID_DX11VideoRenderer, ...) in the 
DllRegisterServer method. This line can only trick the user in attempting to add 
DX11VideoRenderer which appears in the Other category of MFT transforms of the 
Add Transform... dialog of the Topology menu after registration, which is 
impossible, because DX11VideoRenderer is not an MF transform.
