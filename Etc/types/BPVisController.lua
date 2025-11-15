---@meta

---@class ABPVisController_C : AVisController
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
local ABPVisController_C = {}

---@param DeltaSeconds float
function ABPVisController_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisController_C:ExecuteUbergraph_BPVisController(EntryPoint) end


