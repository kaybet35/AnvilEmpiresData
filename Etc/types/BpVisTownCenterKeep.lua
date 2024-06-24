---@meta

---@class ABpVisTownCenterKeep_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisStaticMesh32 UVisStaticMeshComponent
---@field VisStaticMesh31 UVisStaticMeshComponent
---@field VisStaticMesh1 UVisStaticMeshComponent
---@field VisStaticMesh30 UVisStaticMeshComponent
---@field VisStaticMesh_floor UVisStaticMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field ScorchEffect6 UScorchEffectComponent
---@field ScorchEffect1 UScorchEffectComponent
---@field ScorchEffect7 UScorchEffectComponent
---@field ScorchEffect4 UScorchEffectComponent
---@field ScorchEffect5 UScorchEffectComponent
---@field ScorchEffect2 UScorchEffectComponent
---@field Fire USceneComponent
---@field VisTownAreaMarkerDecal UVisTownAreaMarkerDecalComponent
---@field DebugSphere UStaticMeshComponent
ABpVisTownCenterKeep_C = {}

---@param DeltaSeconds float
function ABpVisTownCenterKeep_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABpVisTownCenterKeep_C:ExecuteUbergraph_BpVisTownCenterKeep(EntryPoint) end


