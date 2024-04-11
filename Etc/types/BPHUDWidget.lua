---@meta

---@class UBPHUDWidget_C : UHUDWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TownStatusAlertAnimation UWidgetAnimation
---@field WinConditionAnimation UWidgetAnimation
---@field BPFoodCooldownWidget UBPFoodCooldownWidget_C
---@field PreAlphaBadge UImage
UBPHUDWidget_C = {}

function UBPHUDWidget_C:PlayWinConditionAnimation() end
---@param AlertText FText
function UBPHUDWidget_C:PlayTownStatusAlert(AlertText) end
---@param EntryPoint int32
function UBPHUDWidget_C:ExecuteUbergraph_BPHUDWidget(EntryPoint) end


