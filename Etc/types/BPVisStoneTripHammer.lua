---@meta

---@class ABPVisStoneTripHammer_C : AVisStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SkeletalMesh USkeletalMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field PowerUnitData UPowerUnitDataComponent
ABPVisStoneTripHammer_C = {}

---@param DeltaSeconds float
function ABPVisStoneTripHammer_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisStoneTripHammer_C:ExecuteUbergraph_BPVisStoneTripHammer(EntryPoint) end


