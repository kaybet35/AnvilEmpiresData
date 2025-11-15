---@meta

---@class ABPVisTownGround_C : AVisStructure
---@field UberGraphFrame FPointerToUberGraphFrame
local ABPVisTownGround_C = {}

function ABPVisTownGround_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisTownGround_C:ExecuteUbergraph_BPVisTownGround(EntryPoint) end


