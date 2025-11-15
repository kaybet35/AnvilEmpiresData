---@meta

---@class UBPHUDWidget_C : UHUDWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackoutAnimation UWidgetAnimation
---@field AvatarImageBackground UImage
---@field BPFoodCooldownWidget_1 UBPFoodCooldownWidget_C
---@field BPRestedStatusWidget UBPRestedStatusWidget_C
---@field BPTemperatureStatusWidget UBPTemperatureStatusWidget_C
---@field GuardThresholdIndicator UImage
---@field Image UImage
---@field PreAlphaBadge UImage
local UBPHUDWidget_C = {}

function UBPHUDWidget_C:PlayBlackoutAnimation() end
---@param EntryPoint int32
function UBPHUDWidget_C:ExecuteUbergraph_BPHUDWidget(EntryPoint) end


