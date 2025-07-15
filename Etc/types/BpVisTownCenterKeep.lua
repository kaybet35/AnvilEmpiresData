---@meta

---@class ABpVisTownCenterKeep_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamSkeletalMesh2 UVisTeamSkeletalMeshComponent
---@field VisTeamSkeletalMesh1 UVisTeamSkeletalMeshComponent
---@field VisTeamSkeletalMesh UVisTeamSkeletalMeshComponent
---@field VisTeamSkeletalMesh3 UVisTeamSkeletalMeshComponent
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
---@field Roof UVisStaticMeshComponent
---@field Stairs UVisStaticMeshComponent
---@field FF UVisStaticMeshComponent
---@field Skirt UVisStaticMeshComponent
---@field SF UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field DebugSphere UStaticMeshComponent
ABpVisTownCenterKeep_C = {}

---@param DeltaSeconds float
function ABpVisTownCenterKeep_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABpVisTownCenterKeep_C:ExecuteUbergraph_BpVisTownCenterKeep(EntryPoint) end


