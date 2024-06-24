---@meta

---@class UBPHUDWidget_C : UHUDWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WinConditionAnimation UWidgetAnimation
---@field BPFoodCooldownWidget_1 UBPFoodCooldownWidget_C
---@field BPHUDHintWidget UBPHUDHintWidget_C
---@field BPRestedStatusWidget UBPRestedStatusWidget_C
---@field PreAlphaBadge UImage
UBPHUDWidget_C = {}

function UBPHUDWidget_C:PlayWinConditionAnimation() end
---@param EntryPoint int32
function UBPHUDWidget_C:ExecuteUbergraph_BPHUDWidget(EntryPoint) end


