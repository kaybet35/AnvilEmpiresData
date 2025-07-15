---@meta

---@class ABpVisTownCenterKeepT3_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamSkeletalMesh UVisTeamSkeletalMeshComponent
---@field VisTeamSkeletalMesh3 UVisTeamSkeletalMeshComponent
---@field VisTeamSkeletalMesh2 UVisTeamSkeletalMeshComponent
---@field VisTeamSkeletalMesh1 UVisTeamSkeletalMeshComponent
---@field CollapsedMeshSF UVisStaticMeshComponent
---@field CollapsedMeshRoof UVisStaticMeshComponent
---@field CollapsedMeshFF UVisStaticMeshComponent
---@field VisRandomMeshDecor26 UVisRandomMeshDecorComponent
---@field VisRandomMeshDecor25 UVisRandomMeshDecorComponent
---@field VisRandomMeshDecor24 UVisRandomMeshDecorComponent
---@field VisRandomMeshDecor23 UVisRandomMeshDecorComponent
---@field ChildActor35 UChildActorComponent
---@field ChildActor34 UChildActorComponent
---@field Stairs UVisStaticMeshComponent
---@field Roof UVisStaticMeshComponent
---@field SF UVisStaticMeshComponent
---@field Skirt UVisStaticMeshComponent
---@field FF UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field DebugSphere UStaticMeshComponent
ABpVisTownCenterKeepT3_C = {}

---@param DeltaSeconds float
function ABpVisTownCenterKeepT3_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABpVisTownCenterKeepT3_C:ExecuteUbergraph_BpVisTownCenterKeepT3(EntryPoint) end


