---@meta

---@class ABPVisWoodSaw_C : AVisStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SkeletalMesh USkeletalMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field PowerUnitData UPowerUnitDataComponent
local ABPVisWoodSaw_C = {}

---@param DeltaSeconds float
function ABPVisWoodSaw_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisWoodSaw_C:ExecuteUbergraph_BPVisWoodSaw(EntryPoint) end


