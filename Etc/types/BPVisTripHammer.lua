---@meta

---@class ABPVisTripHammer_C : AVisStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PowerUnitData UPowerUnitDataComponent
---@field SkeletalMesh USkeletalMeshComponent
ABPVisTripHammer_C = {}

---@param DeltaSeconds float
function ABPVisTripHammer_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisTripHammer_C:ExecuteUbergraph_BPVisTripHammer(EntryPoint) end


