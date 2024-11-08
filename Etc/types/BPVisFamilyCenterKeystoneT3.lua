---@meta

---@class ABPVisFamilyCenterKeystoneT3_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CollapsedMesh UVisStaticMeshComponent
---@field VisTeamMesh1 UVisTeamMeshComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyCenterKeystoneT3_C = {}

function ABPVisFamilyCenterKeystoneT3_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterKeystoneT3_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterKeystoneT3_C:ExecuteUbergraph_BPVisFamilyCenterKeystoneT3(EntryPoint) end


