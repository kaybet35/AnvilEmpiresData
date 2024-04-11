---@meta

---@class URadialSlider : UWidget
---@field Value float
---@field ValueDelegate FRadialSliderValueDelegate
---@field bUseCustomDefaultValue boolean
---@field CustomDefaultValue float
---@field SliderRange FRuntimeFloatCurve
---@field ValueTags TArray<float>
---@field SliderHandleStartAngle float
---@field SliderHandleEndAngle float
---@field AngularOffset float
---@field HandStartEndRatio FVector2D
---@field WidgetStyle FSliderStyle
---@field SliderBarColor FLinearColor
---@field SliderProgressColor FLinearColor
---@field SliderHandleColor FLinearColor
---@field CenterBackgroundColor FLinearColor
---@field Locked boolean
---@field MouseUsesStep boolean
---@field RequiresControllerLock boolean
---@field StepSize float
---@field IsFocusable boolean
---@field UseVerticalDrag boolean
---@field ShowSliderHandle boolean
---@field ShowSliderHand boolean
---@field OnMouseCaptureBegin FRadialSliderOnMouseCaptureBegin
---@field OnMouseCaptureEnd FRadialSliderOnMouseCaptureEnd
---@field OnControllerCaptureBegin FRadialSliderOnControllerCaptureBegin
---@field OnControllerCaptureEnd FRadialSliderOnControllerCaptureEnd
---@field OnValueChanged FRadialSliderOnValueChanged
URadialSlider = {}

---@param InValueTags TArray<float>
function URadialSlider:SetValueTags(InValueTags) end
---@param InValue float
function URadialSlider:SetValue(InValue) end
---@param InUseVerticalDrag boolean
function URadialSlider:SetUseVerticalDrag(InUseVerticalDrag) end
---@param InValue float
function URadialSlider:SetStepSize(InValue) end
---@param InSliderRange FRuntimeFloatCurve
function URadialSlider:SetSliderRange(InSliderRange) end
---@param InValue FLinearColor
function URadialSlider:SetSliderProgressColor(InValue) end
---@param InValue float
function URadialSlider:SetSliderHandleStartAngle(InValue) end
---@param InValue float
function URadialSlider:SetSliderHandleEndAngle(InValue) end
---@param InValue FLinearColor
function URadialSlider:SetSliderHandleColor(InValue) end
---@param InValue FLinearColor
function URadialSlider:SetSliderBarColor(InValue) end
---@param InShowSliderHandle boolean
function URadialSlider:SetShowSliderHandle(InShowSliderHandle) end
---@param InShowSliderHand boolean
function URadialSlider:SetShowSliderHand(InShowSliderHand) end
---@param InValue boolean
function URadialSlider:SetLocked(InValue) end
---@param InValue FVector2D
function URadialSlider:SetHandStartEndRatio(InValue) end
---@param InValue float
function URadialSlider:SetCustomDefaultValue(InValue) end
---@param InValue FLinearColor
function URadialSlider:SetCenterBackgroundColor(InValue) end
---@param InValue float
function URadialSlider:SetAngularOffset(InValue) end
---@return float
function URadialSlider:GetValue() end
---@return float
function URadialSlider:GetNormalizedSliderHandlePosition() end
---@return float
function URadialSlider:GetCustomDefaultValue() end


