---@meta

---@class ABPVisFamilyCenterT2_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SmokeStack UNiagaraComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
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


