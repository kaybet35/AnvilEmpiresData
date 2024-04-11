#ifndef UE4SS_SDK_AdvancedWidgets_HPP
#define UE4SS_SDK_AdvancedWidgets_HPP

class URadialSlider : public UWidget
{
    float Value;                                                                      // 0x0150 (size: 0x4)
    FRadialSliderValueDelegate ValueDelegate;                                         // 0x0154 (size: 0x10)
    float GetFloat();
    bool bUseCustomDefaultValue;                                                      // 0x0164 (size: 0x1)
    float CustomDefaultValue;                                                         // 0x0168 (size: 0x4)
    FRuntimeFloatCurve SliderRange;                                                   // 0x0170 (size: 0x88)
    TArray<float> ValueTags;                                                          // 0x01F8 (size: 0x10)
    float SliderHandleStartAngle;                                                     // 0x0208 (size: 0x4)
    float SliderHandleEndAngle;                                                       // 0x020C (size: 0x4)
    float AngularOffset;                                                              // 0x0210 (size: 0x4)
    FVector2D HandStartEndRatio;                                                      // 0x0218 (size: 0x10)
    FSliderStyle WidgetStyle;                                                         // 0x0230 (size: 0x500)
    FLinearColor SliderBarColor;                                                      // 0x0730 (size: 0x10)
    FLinearColor SliderProgressColor;                                                 // 0x0740 (size: 0x10)
    FLinearColor SliderHandleColor;                                                   // 0x0750 (size: 0x10)
    FLinearColor CenterBackgroundColor;                                               // 0x0760 (size: 0x10)
    bool Locked;                                                                      // 0x0770 (size: 0x1)
    bool MouseUsesStep;                                                               // 0x0771 (size: 0x1)
    bool RequiresControllerLock;                                                      // 0x0772 (size: 0x1)
    float StepSize;                                                                   // 0x0774 (size: 0x4)
    bool IsFocusable;                                                                 // 0x0778 (size: 0x1)
    bool UseVerticalDrag;                                                             // 0x0779 (size: 0x1)
    bool ShowSliderHandle;                                                            // 0x077A (size: 0x1)
    bool ShowSliderHand;                                                              // 0x077B (size: 0x1)
    FRadialSliderOnMouseCaptureBegin OnMouseCaptureBegin;                             // 0x0780 (size: 0x10)
    void OnMouseCaptureBeginEvent();
    FRadialSliderOnMouseCaptureEnd OnMouseCaptureEnd;                                 // 0x0790 (size: 0x10)
    void OnMouseCaptureEndEvent();
    FRadialSliderOnControllerCaptureBegin OnControllerCaptureBegin;                   // 0x07A0 (size: 0x10)
    void OnControllerCaptureBeginEvent();
    FRadialSliderOnControllerCaptureEnd OnControllerCaptureEnd;                       // 0x07B0 (size: 0x10)
    void OnControllerCaptureEndEvent();
    FRadialSliderOnValueChanged OnValueChanged;                                       // 0x07C0 (size: 0x10)
    void OnFloatValueChangedEvent(float Value);

    void SetValueTags(const TArray<float>& InValueTags);
    void SetValue(float InValue);
    void SetUseVerticalDrag(bool InUseVerticalDrag);
    void SetStepSize(float InValue);
    void SetSliderRange(const FRuntimeFloatCurve& InSliderRange);
    void SetSliderProgressColor(FLinearColor InValue);
    void SetSliderHandleStartAngle(float InValue);
    void SetSliderHandleEndAngle(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetShowSliderHandle(bool InShowSliderHandle);
    void SetShowSliderHand(bool InShowSliderHand);
    void SetLocked(bool InValue);
    void SetHandStartEndRatio(FVector2D InValue);
    void SetCustomDefaultValue(float InValue);
    void SetCenterBackgroundColor(FLinearColor InValue);
    void SetAngularOffset(float InValue);
    float GetValue();
    float GetNormalizedSliderHandlePosition();
    float GetCustomDefaultValue();
}; // Size: 0x7E0

#endif
