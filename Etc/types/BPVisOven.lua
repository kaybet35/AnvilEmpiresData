---@meta

---@class ABPVisOven_C : AVisCookingStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OvenBurningFront UNiagaraComponent
---@field Refining UNiagaraComponent
---@field OvenFueledSparks UNiagaraComponent
---@field Fueled UNiagaraComponent
---@field Burning UNiagaraComponent
---@field Campfire_Cue UAudioComponent
---@field PopulatedAssets UVisStaticMeshComponent
---@field RefiningAssets UVisStaticMeshComponent
---@field RefiningAssets1 UVisStaticMeshComponent
---@field Fire USceneComponent
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect8 UScorchEffectComponent
---@field ScorchEffect6 UScorchEffectComponent
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
ABPVisOven_C = {}

function ABPVisOven_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisOven_C:ExecuteUbergraph_BPVisOven(EntryPoint) end


