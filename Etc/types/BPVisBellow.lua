---@meta

---@class ABPVisBellow_C : AVisHeatingStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PowerUnitData UPowerUnitDataComponent
---@field SkeletalMesh USkeletalMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
ABPVisBellow_C = {}

---@param DeltaSeconds float
function ABPVisBellow_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisBellow_C:ExecuteUbergraph_BPVisBellow(EntryPoint) end


