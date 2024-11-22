---@meta

---@class ABPVisFamilyCenterKeystoneT3_C : AVisFamilyCenter
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
ABPVisFamilyCenterKeystoneT3_C = {}

function ABPVisFamilyCenterKeystoneT3_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterKeystoneT3_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterKeystoneT3_C:ExecuteUbergraph_BPVisFamilyCenterKeystoneT3(EntryPoint) end


