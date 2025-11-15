---@meta

---@class UBPGameplayOverlay_C : UGameplayOverlay
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WinConditionAnimation UWidgetAnimation
local UBPGameplayOverlay_C = {}

function UBPGameplayOverlay_C:PlayWinConditionAnimation() end
---@param EntryPoint int32
function UBPGameplayOverlay_C:ExecuteUbergraph_BPGameplayOverlay(EntryPoint) end


