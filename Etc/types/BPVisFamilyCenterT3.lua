---@meta

---@class ABPVisFamilyCenterT3_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SmokeStack UNiagaraComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyCenterT3_C = {}

function ABPVisFamilyCenterT3_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterT3_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterT3_C:ExecuteUbergraph_BPVisFamilyCenterT3(EntryPoint) end


