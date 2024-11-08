---@meta

---@class ABPVisFamilyCenterKeystoneT1_C : AVisFamilyCenter
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
ABPVisFamilyCenterKeystoneT1_C = {}

function ABPVisFamilyCenterKeystoneT1_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterKeystoneT1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterKeystoneT1_C:ExecuteUbergraph_BPVisFamilyCenterKeystoneT1(EntryPoint) end


