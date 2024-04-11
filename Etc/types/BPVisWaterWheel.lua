---@meta

---@class ABPVisWaterWheel_C : AVisStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PowerUnitData UPowerUnitDataComponent
---@field ConnectorShaft USkeletalMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field SkeletalMesh USkeletalMeshComponent
ABPVisWaterWheel_C = {}

---@param DeltaSeconds float
function ABPVisWaterWheel_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisWaterWheel_C:ExecuteUbergraph_BPVisWaterWheel(EntryPoint) end


