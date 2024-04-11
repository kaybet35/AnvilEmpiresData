---@meta

---@class ABpVisTownCenterT1_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh UVisTeamMeshComponent
---@field SmallFire UNiagaraComponent
---@field VisStaticMesh8 UVisStaticMeshComponent
---@field VisStaticMesh7 UVisStaticMeshComponent
---@field VisStaticMesh6 UVisStaticMeshComponent
---@field VisStaticMesh5 UVisStaticMeshComponent
---@field VisStaticMesh4 UVisStaticMeshComponent
---@field VisStaticMesh3 UVisStaticMeshComponent
---@field VisStaticMesh2 UVisStaticMeshComponent
---@field VisStaticMesh1 UVisStaticMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field ScorchEffect6 UScorchEffectComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect2 UScorchEffectComponent
---@field Fire USceneComponent
---@field VisTownAreaMarkerDecal UVisTownAreaMarkerDecalComponent
---@field DebugSphere UStaticMeshComponent
ABpVisTownCenterT1_C = {}

---@param DeltaSeconds float
function ABpVisTownCenterT1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABpVisTownCenterT1_C:ExecuteUbergraph_BpVisTownCenterT1(EntryPoint) end


