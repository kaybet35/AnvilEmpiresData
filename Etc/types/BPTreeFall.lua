---@meta

---@class ABPTreeFall_C : AVisActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Top UStaticMeshComponent
---@field Stump UStaticMeshComponent
---@field Decal UDecalComponent
---@field DefaultSceneRoot USceneComponent
---@field Curve UCurveFloat
---@field TreeFall double
ABPTreeFall_C = {}

---@param DeltaSeconds float
function ABPTreeFall_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPTreeFall_C:ExecuteUbergraph_BPTreeFall(EntryPoint) end


