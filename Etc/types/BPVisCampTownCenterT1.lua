---@meta

---@class ABPVisCampTownCenterT1_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ScorchEffect6 UScorchEffectComponent
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect8 UScorchEffectComponent
---@field Fire USceneComponent
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field VisTownAreaMarkerDecal UVisTownAreaMarkerDecalComponent
ABPVisCampTownCenterT1_C = {}

---@param DeltaSeconds float
function ABPVisCampTownCenterT1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisCampTownCenterT1_C:ExecuteUbergraph_BPVisCampTownCenterT1(EntryPoint) end


