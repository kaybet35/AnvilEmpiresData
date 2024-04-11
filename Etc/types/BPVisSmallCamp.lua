---@meta

---@class ABPVisSmallCamp_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisStaticMesh4 UVisStaticMeshComponent
---@field ScorchEffect6 UScorchEffectComponent
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect8 UScorchEffectComponent
---@field Fire USceneComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field VisTownAreaMarkerDecal UVisTownAreaMarkerDecalComponent
ABPVisSmallCamp_C = {}

---@param DeltaSeconds float
function ABPVisSmallCamp_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisSmallCamp_C:ExecuteUbergraph_BPVisSmallCamp(EntryPoint) end


