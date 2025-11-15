---@meta

---@class UBPUWCollapseFX_C : USceneComponent
---@field UberGraphFrame FPointerToUberGraphFrame
local UBPUWCollapseFX_C = {}

function UBPUWCollapseFX_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function UBPUWCollapseFX_C:ExecuteUbergraph_BPUWCollapseFX(EntryPoint) end


