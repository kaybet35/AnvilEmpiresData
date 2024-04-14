---@meta

---@class ABPVisFamilyCenter_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh1 UVisTeamMeshComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
---@field Stairs1 UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field Stairs UVisStaticMeshComponent
---@field SmokeStack UNiagaraComponent
---@field Roof UVisStaticMeshComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyCenter_C = {}

function ABPVisFamilyCenter_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenter_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenter_C:ExecuteUbergraph_BPVisFamilyCenter(EntryPoint) end


