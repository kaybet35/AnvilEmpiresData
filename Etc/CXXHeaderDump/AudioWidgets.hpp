#ifndef UE4SS_SDK_AudioWidgets_HPP
#define UE4SS_SDK_AudioWidgets_HPP

#include "AudioWidgets_enums.hpp"

struct FAudioMeterStyle : public FSlateWidgetStyle
{
    FSlateBrush MeterValueImage;                                                      // 0x0010 (size: 0xD0)
    FSlateBrush BackgroundImage;                                                      // 0x00E0 (size: 0xD0)
    FSlateBrush MeterBackgroundImage;                                                 // 0x01B0 (size: 0xD0)
    FSlateBrush MeterValueBackgroundImage;                                            // 0x0280 (size: 0xD0)
    FSlateBrush MeterPeakImage;                                                       // 0x0350 (size: 0xD0)
    FVector2D MeterSize;                                                              // 0x0420 (size: 0x10)
    FVector2D MeterPadding;                                                           // 0x0430 (size: 0x10)
    float MeterValuePadding;                                                          // 0x0440 (size: 0x4)
    float PeakValueWidth;                                                             // 0x0444 (size: 0x4)
    FVector2D ValueRangeDb;                                                           // 0x0448 (size: 0x10)
    bool bShowScale;                                                                  // 0x0458 (size: 0x1)
    bool bScaleSide;                                                                  // 0x0459 (size: 0x1)
    float ScaleHashOffset;                                                            // 0x045C (size: 0x4)
    float ScaleHashWidth;                                                             // 0x0460 (size: 0x4)
    float ScaleHashHeight;                                                            // 0x0464 (size: 0x4)
    int32 DecibelsPerHash;                                                            // 0x0468 (size: 0x4)
    FSlateFontInfo Font;                                                              // 0x0470 (size: 0x58)

}; // Size: 0x4D0

struct FAudioRadialSliderStyle : public FSlateWidgetStyle
{
    FAudioTextBoxStyle TextBoxStyle;                                                  // 0x0010 (size: 0x100)
    FSlateColor CenterBackgroundColor;                                                // 0x0110 (size: 0x14)
    FSlateColor SliderBarColor;                                                       // 0x0124 (size: 0x14)
    FSlateColor SliderProgressColor;                                                  // 0x0138 (size: 0x14)
    float LabelPadding;                                                               // 0x014C (size: 0x4)
    float DefaultSliderRadius;                                                        // 0x0150 (size: 0x4)

}; // Size: 0x160

struct FAudioSliderStyle : public FSlateWidgetStyle
{
    FSliderStyle SliderStyle;                                                         // 0x0010 (size: 0x500)
    FAudioTextBoxStyle TextBoxStyle;                                                  // 0x0510 (size: 0x100)
    FSlateBrush WidgetBackgroundImage;                                                // 0x0610 (size: 0xD0)
    FSlateColor SliderBackgroundColor;                                                // 0x06E0 (size: 0x14)
    FVector2D SliderBackgroundSize;                                                   // 0x06F8 (size: 0x10)
    float LabelPadding;                                                               // 0x0708 (size: 0x4)
    FSlateColor SliderBarColor;                                                       // 0x070C (size: 0x14)
    FSlateColor SliderThumbColor;                                                     // 0x0720 (size: 0x14)
    FSlateColor WidgetBackgroundColor;                                                // 0x0734 (size: 0x14)

}; // Size: 0x750

struct FAudioTextBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;                                                      // 0x0010 (size: 0xD0)
    FSlateColor BackgroundColor;                                                      // 0x00E0 (size: 0x14)

}; // Size: 0x100

struct FMeterChannelInfo
{
    float MeterValue;                                                                 // 0x0000 (size: 0x4)
    float PeakValue;                                                                  // 0x0004 (size: 0x4)
    float ClippingValue;                                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{
}; // Size: 0x370

class UAudioFrequencySlider : public UAudioSliderBase
{
    FVector2D OutputRange;                                                            // 0x09A0 (size: 0x10)

}; // Size: 0x9B0

class UAudioMeter : public UWidget
{
    TArray<FMeterChannelInfo> MeterChannelInfo;                                       // 0x0150 (size: 0x10)
    FAudioMeterMeterChannelInfoDelegate MeterChannelInfoDelegate;                     // 0x0160 (size: 0x10)
    TArray<FMeterChannelInfo> GetMeterChannelInfo();
    FAudioMeterStyle WidgetStyle;                                                     // 0x0170 (size: 0x4D0)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x0640 (size: 0x1)
    FLinearColor BackgroundColor;                                                     // 0x0644 (size: 0x10)
    FLinearColor MeterBackgroundColor;                                                // 0x0654 (size: 0x10)
    FLinearColor MeterValueColor;                                                     // 0x0664 (size: 0x10)
    FLinearColor MeterPeakColor;                                                      // 0x0674 (size: 0x10)
    FLinearColor MeterClippingColor;                                                  // 0x0684 (size: 0x10)
    FLinearColor MeterScaleColor;                                                     // 0x0694 (size: 0x10)
    FLinearColor MeterScaleLabelColor;                                                // 0x06A4 (size: 0x10)

    void SetMeterValueColor(FLinearColor InValue);
    void SetMeterScaleLabelColor(FLinearColor InValue);
    void SetMeterScaleColor(FLinearColor InValue);
    void SetMeterPeakColor(FLinearColor InValue);
    void SetMeterClippingColor(FLinearColor InValue);
    void SetMeterChannelInfo(const TArray<FMeterChannelInfo>& InMeterChannelInfo);
    void SetMeterBackgroundColor(FLinearColor InValue);
    void SetBackgroundColor(FLinearColor InValue);
    TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
    TArray<FMeterChannelInfo> GetMeterChannelInfo();
}; // Size: 0x6D0

class UAudioRadialSlider : public UWidget
{
    float Value;                                                                      // 0x0150 (size: 0x4)
    FAudioRadialSliderValueDelegate ValueDelegate;                                    // 0x0154 (size: 0x10)
    float GetFloat();
    TEnumAsByte<EAudioRadialSliderLayout> WidgetLayout;                               // 0x0164 (size: 0x1)
    FLinearColor CenterBackgroundColor;                                               // 0x0168 (size: 0x10)
    FLinearColor SliderProgressColor;                                                 // 0x0178 (size: 0x10)
    FLinearColor SliderBarColor;                                                      // 0x0188 (size: 0x10)
    FVector2D HandStartEndRatio;                                                      // 0x0198 (size: 0x10)
    FText UnitsText;                                                                  // 0x01A8 (size: 0x18)
    FLinearColor TextLabelBackgroundColor;                                            // 0x01C0 (size: 0x10)
    bool ShowLabelOnlyOnHover;                                                        // 0x01D0 (size: 0x1)
    bool ShowUnitsText;                                                               // 0x01D1 (size: 0x1)
    bool IsUnitsTextReadOnly;                                                         // 0x01D2 (size: 0x1)
    bool IsValueTextReadOnly;                                                         // 0x01D3 (size: 0x1)
    float SliderThickness;                                                            // 0x01D4 (size: 0x4)
    FVector2D OutputRange;                                                            // 0x01D8 (size: 0x10)
    FAudioRadialSliderOnValueChanged OnValueChanged;                                  // 0x01E8 (size: 0x10)
    void OnAudioRadialSliderValueChangedEvent(float Value);

    void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);
    void SetValueTextReadOnly(const bool bIsReadOnly);
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    void SetUnitsText(const FText Units);
    void SetTextLabelBackgroundColor(FSlateColor InColor);
    void SetSliderThickness(const float InThickness);
    void SetSliderProgressColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetShowUnitsText(const bool bShowUnitsText);
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    void SetOutputRange(const FVector2D InOutputRange);
    void SetHandStartEndRatio(const FVector2D InHandStartEndRatio);
    void SetCenterBackgroundColor(FLinearColor InValue);
    float GetSliderValue(const float OutputValue);
    float GetOutputValue(const float InSliderValue);
}; // Size: 0x370

class UAudioSlider : public UAudioSliderBase
{
    TWeakObjectPtr<class UCurveFloat> LinToOutputCurve;                               // 0x09A0 (size: 0x8)
    TWeakObjectPtr<class UCurveFloat> OutputToLinCurve;                               // 0x09A8 (size: 0x8)

}; // Size: 0x9B0

class UAudioSliderBase : public UWidget
{
    float Value;                                                                      // 0x0150 (size: 0x4)
    FText UnitsText;                                                                  // 0x0158 (size: 0x18)
    FLinearColor TextLabelBackgroundColor;                                            // 0x0170 (size: 0x10)
    FAudioSliderBaseTextLabelBackgroundColorDelegate TextLabelBackgroundColorDelegate; // 0x0180 (size: 0x10)
    FLinearColor GetLinearColor();
    bool ShowLabelOnlyOnHover;                                                        // 0x0190 (size: 0x1)
    bool ShowUnitsText;                                                               // 0x0191 (size: 0x1)
    bool IsUnitsTextReadOnly;                                                         // 0x0192 (size: 0x1)
    bool IsValueTextReadOnly;                                                         // 0x0193 (size: 0x1)
    FAudioSliderBaseValueDelegate ValueDelegate;                                      // 0x0194 (size: 0x10)
    float GetFloat();
    FLinearColor SliderBackgroundColor;                                               // 0x01A4 (size: 0x10)
    FAudioSliderBaseSliderBackgroundColorDelegate SliderBackgroundColorDelegate;      // 0x01B4 (size: 0x10)
    FLinearColor GetLinearColor();
    FLinearColor SliderBarColor;                                                      // 0x01C4 (size: 0x10)
    FAudioSliderBaseSliderBarColorDelegate SliderBarColorDelegate;                    // 0x01D4 (size: 0x10)
    FLinearColor GetLinearColor();
    FLinearColor SliderThumbColor;                                                    // 0x01E4 (size: 0x10)
    FAudioSliderBaseSliderThumbColorDelegate SliderThumbColorDelegate;                // 0x01F4 (size: 0x10)
    FLinearColor GetLinearColor();
    FLinearColor WidgetBackgroundColor;                                               // 0x0204 (size: 0x10)
    FAudioSliderBaseWidgetBackgroundColorDelegate WidgetBackgroundColorDelegate;      // 0x0214 (size: 0x10)
    FLinearColor GetLinearColor();
    TEnumAsByte<EOrientation> Orientation;                                            // 0x0224 (size: 0x1)
    FAudioSliderBaseOnValueChanged OnValueChanged;                                    // 0x0228 (size: 0x10)
    void OnFloatValueChangedEvent(float Value);

    void SetWidgetBackgroundColor(FLinearColor InValue);
    void SetValueTextReadOnly(const bool bIsReadOnly);
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    void SetUnitsText(const FText Units);
    void SetTextLabelBackgroundColor(FSlateColor InColor);
    void SetSliderThumbColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetSliderBackgroundColor(FLinearColor InValue);
    void SetShowUnitsText(const bool bShowUnitsText);
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    float GetSliderValue(const float OutputValue);
    float GetOutputValue(const float InSliderValue);
    float GetLinValue(const float OutputValue);
}; // Size: 0x9A0

class UAudioVolumeRadialSlider : public UAudioRadialSlider
{
}; // Size: 0x370

class UAudioVolumeSlider : public UAudioSlider
{
}; // Size: 0x9B0

#endif
