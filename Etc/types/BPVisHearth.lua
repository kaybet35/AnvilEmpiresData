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
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect8 UScorchEffectComponent
---@field ScorchEffect6 UScorchEffectComponent
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
ABPVisHearth_C = {}

function ABPVisHearth_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisHearth_C:ExecuteUbergraph_BPVisHearth(EntryPoint) end


