---@meta

---@class ABPVisFoodRefineryT3_C : AVisRefinery
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Niagara2 UNiagaraComponent
---@field VisStaticMesh2 UVisStaticMeshComponent
---@field MillSmallActive2 UVisStaticMeshComponent
---@field MillSmall2 UVisStaticMeshComponent
---@field ScorchEffect6 UScorchEffectComponent
---@field ScorchEffect9 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect8 UScorchEffectComponent
---@field Fire USceneComponent
---@field RotateSpeed double
ABPVisFoodRefineryT3_C = {}

---@param DeltaSeconds float
function ABPVisFoodRefineryT3_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFoodRefineryT3_C:ExecuteUbergraph_BPVisFoodRefineryT3(EntryPoint) end


