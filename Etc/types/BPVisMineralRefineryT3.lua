---@meta

---@class ABPVisMineralRefineryT3_C : AVisRefinery
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Niagara UNiagaraComponent
---@field Audio UAudioComponent
---@field Decal UDecalComponent
---@field Decal1 UDecalComponent
---@field VisStaticMesh2 UVisStaticMeshComponent
---@field VisStaticMesh1 UVisStaticMeshComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field ScorchEffect9 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect8 UScorchEffectComponent
---@field ScorchEffect6 UScorchEffectComponent
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect3 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field Fire USceneComponent
---@field Refining USceneComponent
ABPVisMineralRefineryT3_C = {}

function ABPVisMineralRefineryT3_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisMineralRefineryT3_C:ExecuteUbergraph_BPVisMineralRefineryT3(EntryPoint) end


