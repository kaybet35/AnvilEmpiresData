---@meta

---@class ABPVisFamilyHouse_C : AVisFamilyInventory
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SmokeStack UNiagaraComponent
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyHouse_C = {}

function ABPVisFamilyHouse_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyHouse_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyHouse_C:ExecuteUbergraph_BPVisFamilyHouse(EntryPoint) end


