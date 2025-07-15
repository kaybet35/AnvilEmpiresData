---@meta

---@class ABpVisTownCenterTownT3_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamSkeletalMesh UVisTeamSkeletalMeshComponent
---@field VisTeamSkeletalMesh3 UVisTeamSkeletalMeshComponent
---@field VisTeamSkeletalMesh2 UVisTeamSkeletalMeshComponent
---@field VisTeamSkeletalMesh1 UVisTeamSkeletalMeshComponent
---@field FF UVisStaticMeshComponent
---@field DebugSphere UStaticMeshComponent
---@field Roof UVisStaticMeshComponent
---@field SF UVisStaticMeshComponent
---@field Skirt UVisStaticMeshComponent
---@field CollapsedMeshSF UVisStaticMeshComponent
---@field CollapsedMeshFF UVisStaticMeshComponent
---@field CollapsedMeshRoof UVisStaticMeshComponent
---@field VisRandomMeshDecor25 UVisRandomMeshDecorComponent
---@field VisRandomMeshDecor23 UVisRandomMeshDecorComponent
---@field ChildActor35 UChildActorComponent
---@field VisRandomMeshDecor24 UVisRandomMeshDecorComponent
---@field ChildActor34 UChildActorComponent
---@field VisRandomMeshDecor26 UVisRandomMeshDecorComponent
---@field Stairs UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
ABpVisTownCenterTownT3_C = {}

---@param DeltaSeconds float
function ABpVisTownCenterTownT3_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABpVisTownCenterTownT3_C:ExecuteUbergraph_BpVisTownCenterTownT3(EntryPoint) end


