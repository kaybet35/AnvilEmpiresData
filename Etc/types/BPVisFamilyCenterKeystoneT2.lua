---@meta

---@class ABPVisFamilyCenterKeystoneT2_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field VisTeamMesh UVisTeamMeshComponent
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field HouseMesh UVisStaticMeshComponent
---@field CollapsedMesh UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyCenterKeystoneT2_C = {}

function ABPVisFamilyCenterKeystoneT2_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterKeystoneT2_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterKeystoneT2_C:ExecuteUbergraph_BPVisFamilyCenterKeystoneT2(EntryPoint) end


