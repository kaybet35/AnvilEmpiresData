---@meta

---@class ABPVisFamilyCenterT2_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisTeamMesh1 UVisTeamMeshComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field Stairs1 UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field Stairs UVisStaticMeshComponent
---@field SmokeStack UNiagaraComponent
---@field Roof UVisStaticMeshComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyCenterT2_C = {}

function ABPVisFamilyCenterT2_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterT2_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterT2_C:ExecuteUbergraph_BPVisFamilyCenterT2(EntryPoint) end


