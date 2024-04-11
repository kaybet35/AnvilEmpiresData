---@meta

---@class ABPVisTownCenterT3_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh UVisTeamMeshComponent
---@field SmokeStack UNiagaraComponent
---@field VisStaticMesh4 UVisStaticMeshComponent
---@field VisStaticMesh3 UVisStaticMeshComponent
---@field VisStaticMesh2 UVisStaticMeshComponent
---@field VisStaticMesh1 UVisStaticMeshComponent
---@field ScorchEffect10 UScorchEffectComponent
---@field ScorchEffect14 UScorchEffectComponent
---@field ScorchEffect13 UScorchEffectComponent
---@field ScorchEffect12 UScorchEffectComponent
---@field ScorchEffect11 UScorchEffectComponent
---@field ScorchEffect9 UScorchEffectComponent
---@field ScorchEffect2 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect8 UScorchEffectComponent
---@field ScorchEffect6 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect3 UScorchEffectComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field VisStaticMesh5 UVisStaticMeshComponent
---@field VisTownAreaMarkerDecal UVisTownAreaMarkerDecalComponent
ABPVisTownCenterT3_C = {}

function ABPVisTownCenterT3_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisTownCenterT3_C:ExecuteUbergraph_BPVisTownCenterT3(EntryPoint) end


