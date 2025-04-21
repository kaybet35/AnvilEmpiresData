---@meta

---@class UBPHUDWidget_C : UHUDWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackoutAnimation UWidgetAnimation
---@field WinConditionAnimation UWidgetAnimation
---@field BPFoodCooldownWidget_1 UBPFoodCooldownWidget_C
---@field BPHUDHintWidget UBPHUDHintWidget_C
---@field BPRestedStatusWidget UBPRestedStatusWidget_C
---@field BPTemperatureStatusWidget UBPTemperatureStatusWidget_C
---@field GuardThresholdIndicator UImage
---@field Image UImage
---@field PreAlphaBadge UImage
UBPHUDWidget_C = {}

function UBPHUDWidget_C:PlayWinConditionAnimation() end
function UBPHUDWidget_C:PlayBlackoutAnimation() end
---@param EntryPoint int32
function UBPHUDWidget_C:ExecuteUbergraph_BPHUDWidget(EntryPoint) end


