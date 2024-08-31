---@meta

---@class ABpVisTownCenterKeep_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh4 UVisTeamMeshComponent
---@field VisTeamMesh2 UVisTeamMeshComponent
---@field VisTeamMesh1 UVisTeamMeshComponent
---@field VisTeamMesh3 UVisTeamMeshComponent
---@field VisStaticMesh34 UVisStaticMeshComponent
---@field VisStaticMesh3 UVisStaticMeshComponent
---@field VisStaticMesh2 UVisStaticMeshComponent
---@field VisStaticMesh_floor1 UVisStaticMeshComponent
---@field VisStaticMesh33 UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field ScorchEffect6 UScorchEffectComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect2 UScorchEffectComponent
---@field Fire USceneComponent
---@field DebugSphere UStaticMeshComponent
ABpVisTownCenterKeep_C = {}

---@param DeltaSeconds float
function ABpVisTownCenterKeep_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABpVisTownCenterKeep_C:ExecuteUbergraph_BpVisTownCenterKeep(EntryPoint) end


