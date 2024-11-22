---@meta

---@class ABpVisTownCenterKeep_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CollapsedMeshRoof UVisStaticMeshComponent
---@field CollapsedMeshSF UVisStaticMeshComponent
---@field CollapsedMeshFF UVisStaticMeshComponent
---@field StaticMesh14 UStaticMeshComponent
---@field StaticMesh13 UStaticMeshComponent
---@field StaticMesh12 UStaticMeshComponent
---@field StaticMesh10 UStaticMeshComponent
---@field StaticMesh9 UStaticMeshComponent
---@field StaticMesh8 UStaticMeshComponent
---@field StaticMesh7 UStaticMeshComponent
---@field StaticMesh6 UStaticMeshComponent
---@field StaticMesh5 UStaticMeshComponent
---@field StaticMesh4 UStaticMeshComponent
---@field StaticMesh3 UStaticMeshComponent
---@field StaticMesh2 UStaticMeshComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field VisTeamMesh1 UVisTeamMeshComponent
---@field VisTeamMesh2 UVisTeamMeshComponent
---@field VisTeamMesh4 UVisTeamMeshComponent
---@field VisTeamMesh3 UVisTeamMeshComponent
---@field Roof UVisStaticMeshComponent
---@field Stairs UVisStaticMeshComponent
---@field FF UVisStaticMeshComponent
---@field Skirt UVisStaticMeshComponent
---@field SF UVisStaticMeshComponent
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


