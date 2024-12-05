---@meta

---@class ABPVisFamilyCenterKeystoneT3_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisFamilyMesh UVisFamilyMeshComponent
---@field CollapsedMesh UVisStaticMeshComponent
---@field VerticalEdge04 UVisFoundationEdgeMeshDecorComponent
---@field VerticalEdge03 UVisFoundationEdgeMeshDecorComponent
---@field VerticalEdge01 UVisFoundationEdgeMeshDecorComponent
---@field VerticalEdge02 UVisFoundationEdgeMeshDecorComponent
---@field HouseMesh UVisStaticMeshComponent
---@field Scene USceneComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyCenterKeystoneT3_C = {}

function ABPVisFamilyCenterKeystoneT3_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterKeystoneT3_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterKeystoneT3_C:ExecuteUbergraph_BPVisFamilyCenterKeystoneT3(EntryPoint) end


