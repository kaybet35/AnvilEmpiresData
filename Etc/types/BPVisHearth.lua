---@meta

---@class ABPVisHearth_C : AVisCookingStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PotBubbling UAudioComponent
---@field Refining UNiagaraComponent
---@field Burning UNiagaraComponent
---@field Fuelled UNiagaraComponent
---@field Campfire_Cue UAudioComponent
---@field FireWood UVisStaticMeshComponent
---@field Scene USceneComponent
---@field RefiningAssets UVisStaticMeshComponent
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
ABPVisHearth_C = {}

function ABPVisHearth_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisHearth_C:ExecuteUbergraph_BPVisHearth(EntryPoint) end


