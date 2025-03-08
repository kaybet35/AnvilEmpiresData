---@meta

---@class ABPVisFamilyCenterKeystoneT2_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CollapsedMesh UVisStaticMeshComponent
---@field VisFamilyMesh UVisFamilyMeshComponent
---@field VerticalEdge02 UVisFoundationEdgeMeshDecorComponent
---@field VerticalEdge04 UVisFoundationEdgeMeshDecorComponent
---@field VerticalEdge03 UVisFoundationEdgeMeshDecorComponent
---@field VerticalEdge01 UVisFoundationEdgeMeshDecorComponent
---@field HouseMesh UVisStaticMeshComponent
---@field Scene USceneComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyCenterKeystoneT2_C = {}

function ABPVisFamilyCenterKeystoneT2_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterKeystoneT2_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterKeystoneT2_C:ExecuteUbergraph_BPVisFamilyCenterKeystoneT2(EntryPoint) end


