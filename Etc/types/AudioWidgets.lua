---@meta

---@class FAudioMeterStyle : FSlateWidgetStyle
---@field MeterValueImage FSlateBrush
---@field BackgroundImage FSlateBrush
---@field MeterBackgroundImage FSlateBrush
---@field MeterValueBackgroundImage FSlateBrush
---@field MeterPeakImage FSlateBrush
---@field MeterSize FVector2D
---@field MeterPadding FVector2D
---@field MeterValuePadding float
---@field PeakValueWidth float
---@field ValueRangeDb FVector2D
---@field bShowScale boolean
---@field bScaleSide boolean
---@field ScaleHashOffset float
---@field ScaleHashWidth float
---@field ScaleHashHeight float
---@field DecibelsPerHash int32
---@field Font FSlateFontInfo
FAudioMeterStyle = {}



---@class FAudioRadialSliderStyle : FSlateWidgetStyle
---@field TextBoxStyle FAudioTextBoxStyle
---@field CenterBackgroundColor FSlateColor
---@field SliderBarColor FSlateColor
---@field SliderProgressColor FSlateColor
---@field LabelPadding float
---@field DefaultSliderRadius float
FAudioRadialSliderStyle = {}



---@class FAudioSliderStyle : FSlateWidgetStyle
---@field SliderStyle FSliderStyle
---@field TextBoxStyle FAudioTextBoxStyle
---@field WidgetBackgroundImage FSlateBrush
---@field SliderBackgroundColor FSlateColor
---@field SliderBackgroundSize FVector2D
---@field LabelPadding float
---@field SliderBarColor FSlateColor
---@field SliderThumbColor FSlateColor
---@field WidgetBackgroundColor FSlateColor
FAudioSliderStyle = {}



---@class FAudioTextBoxStyle : FSlateWidgetStyle
---@field BackgroundImage FSlateBrush
---@field BackgroundColor FSlateColor
FAudioTextBoxStyle = {}



---@class FMeterChannelInfo
---@field MeterValue float
---@field PeakValue float
---@field ClippingValue float
FMeterChannelInfo = {}



---@class UAudioFrequencyRadialSlider : UAudioRadialSlider
UAudioFrequencyRadialSlider = {}


---@class UAudioFrequencySlider : UAudioSliderBase
---@field OutputRange FVector2D
UAudioFrequencySlider = {}



---@class UAudioMeter : UWidget
---@field MeterChannelInfo TArray<FMeterChannelInfo>
---@field MeterChannelInfoDelegate FAudioMeterMeterChannelInfoDelegate
---@field WidgetStyle FAudioMeterStyle
---@field Orientation EOrientation
---@field BackgroundColor FLinearColor
---@field MeterBackgroundColor FLinearColor
---@field MeterValueColor FLinearColor
---@field MeterPeakColor FLinearColor
---@field MeterClippingColor FLinearColor
---@field MeterScaleColor FLinearColor
---@field MeterScaleLabelColor FLinearColor
UAudioMeter = {}

---@param InValue FLinearColor
function UAudioMeter:SetMeterValueColor(InValue) end
---@param InValue FLinearColor
function UAudioMeter:SetMeterScaleLabelColor(InValue) end
---@param InValue FLinearColor
function UAudioMeter:SetMeterScaleColor(InValue) end
---@param InValue FLinearColor
function UAudioMeter:SetMeterPeakColor(InValue) end
---@param InValue FLinearColor
function UAudioMeter:SetMeterClippingColor(InValue) end
---@param InMeterChannelInfo TArray<FMeterChannelInfo>
function UAudioMeter:SetMeterChannelInfo(InMeterChannelInfo) end
---@param InValue FLinearColor
function UAudioMeter:SetMeterBackgroundColor(InValue) end
---@param InValue FLinearColor
function UAudioMeter:SetBackgroundColor(InValue) end
---@return TArray<FMeterChannelInfo>
function UAudioMeter:GetMeterChannelInfo__DelegateSignature() end
---@return TArray<FMeterChannelInfo>
function UAudioMeter:GetMeterChannelInfo() end


---@class UAudioRadialSlider : UWidget
---@field Value float
---@field ValueDelegate FAudioRadialSliderValueDelegate
---@field WidgetLayout EAudioRadialSliderLayout
---@field CenterBackgroundColor FLinearColor
---@field SliderProgressColor FLinearColor
---@field SliderBarColor FLinearColor
---@field HandStartEndRatio FVector2D
---@field UnitsText FText
---@field TextLabelBackgroundColor FLinearColor
---@field ShowLabelOnlyOnHover boolean
---@field ShowUnitsText boolean
---@field IsUnitsTextReadOnly boolean
---@field IsValueTextReadOnly boolean
---@field SliderThickness float
---@field OutputRange FVector2D
---@field OnValueChanged FAudioRadialSliderOnValueChanged
UAudioRadialSlider = {}

---@param InLayout EAudioRadialSliderLayout
function UAudioRadialSlider:SetWidgetLayout(InLayout) end
---@param bIsReadOnly boolean
function UAudioRadialSlider:SetValueTextReadOnly(bIsReadOnly) end
---@param bIsReadOnly boolean
function UAudioRadialSlider:SetUnitsTextReadOnly(bIsReadOnly) end
---@param Units FText
function UAudioRadialSlider:SetUnitsText(Units) end
---@param InColor FSlateColor
function UAudioRadialSlider:SetTextLabelBackgroundColor(InColor) end
---@param InThickness float
function UAudioRadialSlider:SetSliderThickness(InThickness) end
---@param InValue FLinearColor
function UAudioRadialSlider:SetSliderProgressColor(InValue) end
---@param InValue FLinearColor
function UAudioRadialSlider:SetSliderBarColor(InValue) end
---@param bShowUnitsText boolean
function UAudioRadialSlider:SetShowUnitsText(bShowUnitsText) end
---@param bShowLabelOnlyOnHover boolean
function UAudioRadialSlider:SetShowLabelOnlyOnHover(bShowLabelOnlyOnHover) end
---@param InOutputRange FVector2D
function UAudioRadialSlider:SetOutputRange(InOutputRange) end
---@param InHandStartEndRatio FVector2D
function UAudioRadialSlider:SetHandStartEndRatio(InHandStartEndRatio) end
---@param InValue FLinearColor
function UAudioRadialSlider:SetCenterBackgroundColor(InValue) end
---@param OutputValue float
---@return float
function UAudioRadialSlider:GetSliderValue(OutputValue) end
---@param InSliderValue float
---@return float
function UAudioRadialSlider:GetOutputValue(InSliderValue) end


---@class UAudioSlider : UAudioSliderBase
---@field LinToOutputCurve TWeakObjectPtr<UCurveFloat>
---@field OutputToLinCurve TWeakObjectPtr<UCurveFloat>
UAudioSlider = {}



---@class UAudioSliderBase : UWidget
---@field Value float
---@field UnitsText FText
---@field TextLabelBackgroundColor FLinearColor
---@field TextLabelBackgroundColorDelegate FAudioSliderBaseTextLabelBackgroundColorDelegate
---@field ShowLabelOnlyOnHover boolean
---@field ShowUnitsText boolean
---@field IsUnitsTextReadOnly boolean
---@field IsValueTextReadOnly boolean
---@field ValueDelegate FAudioSliderBaseValueDelegate
---@field SliderBackgroundColor FLinearColor
---@field SliderBackgroundColorDelegate FAudioSliderBaseSliderBackgroundColorDelegate
---@field SliderBarColor FLinearColor
---@field SliderBarColorDelegate FAudioSliderBaseSliderBarColorDelegate
---@field SliderThumbColor FLinearColor
---@field SliderThumbColorDelegate FAudioSliderBaseSliderThumbColorDelegate
---@field WidgetBackgroundColor FLinearColor
---@field WidgetBackgroundColorDelegate FAudioSliderBaseWidgetBackgroundColorDelegate
---@field Orientation EOrientation
---@field OnValueChanged FAudioSliderBaseOnValueChanged
UAudioSliderBase = {}

---@param InValue FLinearColor
function UAudioSliderBase:SetWidgetBackgroundColor(InValue) end
---@param bIsReadOnly boolean
function UAudioSliderBase:SetValueTextReadOnly(bIsReadOnly) end
---@param bIsReadOnly boolean
function UAudioSliderBase:SetUnitsTextReadOnly(bIsReadOnly) end
---@param Units FText
function UAudioSliderBase:SetUnitsText(Units) end
---@param InColor FSlateColor
function UAudioSliderBase:SetTextLabelBackgroundColor(InColor) end
---@param InValue FLinearColor
function UAudioSliderBase:SetSliderThumbColor(InValue) end
---@param InValue FLinearColor
function UAudioSliderBase:SetSliderBarColor(InValue) end
---@param InValue FLinearColor
function UAudioSliderBase:SetSliderBackgroundColor(InValue) end
---@param bShowUnitsText boolean
function UAudioSliderBase:SetShowUnitsText(bShowUnitsText) end
---@param bShowLabelOnlyOnHover boolean
function UAudioSliderBase:SetShowLabelOnlyOnHover(bShowLabelOnlyOnHover) end
---@param OutputValue float
---@return float
function UAudioSliderBase:GetSliderValue(OutputValue) end
---@param InSliderValue float
---@return float
function UAudioSliderBase:GetOutputValue(InSliderValue) end
---@param OutputValue float
---@return float
function UAudioSliderBase:GetLinValue(OutputValue) end


---@class UAudioVolumeRadialSlider : UAudioRadialSlider
UAudioVolumeRadialSlider = {}


---@class UAudioVolumeSlider : UAudioSlider
UAudioVolumeSlider = {}


