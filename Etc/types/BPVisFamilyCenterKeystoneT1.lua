---@meta

---@class ABPVisFamilyCenterKeystoneT1_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CollapsedMesh UVisStaticMeshComponent
---@field VisFamilyMesh UVisFamilyMeshComponent
---@field VerticalEdge02 UVisFoundationEdgeMeshDecorComponent
---@field VerticalEdge01 UVisFoundationEdgeMeshDecorComponent
---@field VerticalEdge03 UVisFoundationEdgeMeshDecorComponent
---@field VerticalEdge04 UVisFoundationEdgeMeshDecorComponent
---@field HouseMesh UVisStaticMeshComponent
---@field Scene USceneComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyCenterKeystoneT1_C = {}

function ABPVisFamilyCenterKeystoneT1_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterKeystoneT1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterKeystoneT1_C:ExecuteUbergraph_BPVisFamilyCenterKeystoneT1(EntryPoint) end


