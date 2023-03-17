# topoedit-with-DX11VideoRenderer
This is basically a branch of the Microsoft Windows-classic-samples' topoedit sample,
with a DirectX video rendering sample, DX11VideoRenderer, added to the solution.

Section 'Run the sample', from the DX11VideoRenderer sample's README file, promises 
that, providing the DX11VideoRenderer.dll of the DX11 Video Renderer sample is 
registered in the system, the user can add a DX11VideoRenderer sink to the topology.

However, the promised menu line "Add DX11 Video Renderer" never appears on the 
Topology menu of the topoedit application. Sure, an DX11VideoRenderer option appears 
in the Other category of MFT transforms of the Select Transform dialog called on the 
Topology menu line 'Add transform...', but the DX11VideoRenderer sink cannot be 
added to the topology when a user selects this option: the renderer sink is not 
a transform and lacks the interface IMFTransform.

Neither can the DX11VideoRenderer sink be added as a custom sink (Topology->'Add 
Custom Sink'): this route fails to create an D3D11Device member for the presenter.

To be able to add the DX11VideoRenderer to a list of video renderers available to 
topoedit (which list, in the Microsoft topoedit sample, is limited only to EVR), 
I added the necessary code to the topoedit sample. Mainly, I replicated the code 
used to add the EVR sink node. The Add EVR pipeline starts with the method 
OnAddEVRSink call and further on up to the CTedVideoOutputNode::Init(...) call, 
with necessary adjustments, in the CTedVideoOutputNode::InitDX11(...) methods, made 
to enable use of DX11VideoRenderer. The method CTedVideoOutputNode::Init(...) that 
works in the EVR instantiation route uses a MFCreateVideoRendererActivate method 
(<mfidl.h> header); a DX11VideoRenderer object is activated with an ActivateObject 
method of the IMFActivate object that we create with the 
CreateDX11VideoRendererActivate method exported from DX11VideoRenderer.dll. 
To simplify the use of DX11VideoRenderer.dll, I added the DX11VideoRenderer project 
to my solution and use DX11VideoRenderer.dll without registration. One can easily 
return to using CoCreateInstance methods, if need be.

The DX11VideoRenderer code is added 'as is' from the Microsoft repository, 
only a call to 
MFTRegister(CLSID_DX11VideoRenderer, MFT_CATEGORY_OTHER, L"DX11 Video Renderer", ...) 
in the DllRegisterServer method is removed. This deceptive registration only tricks 
the user into believing that the video renderer can be added as a MF transform.
