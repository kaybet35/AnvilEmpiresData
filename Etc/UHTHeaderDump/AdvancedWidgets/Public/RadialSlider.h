#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SliderStyle -FallbackName=SliderStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnControllerCaptureBeginEvent__DelegateSignature -FallbackName=OnControllerCaptureBeginEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnControllerCaptureEndEvent__DelegateSignature -FallbackName=OnControllerCaptureEndEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnFloatValueChangedEvent__DelegateSignature -FallbackName=OnFloatValueChangedEventDelegate2
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnMouseCaptureBeginEvent__DelegateSignature -FallbackName=OnMouseCaptureBeginEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnMouseCaptureEndEvent__DelegateSignature -FallbackName=OnMouseCaptureEndEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "RadialSlider.generated.h"

UCLASS(Blueprintable)
class ADVANCEDWIDGETS_API URadialSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SliderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ValueTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderHandleStartAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderHandleEndAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HandStartEndRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderProgressColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderHandleColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CenterBackgroundColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Locked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MouseUsesStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiresControllerLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseVerticalDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowSliderHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowSliderHand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseCaptureBeginEvent OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseCaptureEndEvent OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerCaptureBeginEvent OnControllerCaptureBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerCaptureEndEvent OnControllerCaptureEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatValueChangedEvent OnValueChanged;
    
    URadialSlider();

    UFUNCTION(BlueprintCallable)
    void SetValueTags(const TArray<float>& InValueTags);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUseVerticalDrag(bool InUseVerticalDrag);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderRange(const FRuntimeFloatCurve& InSliderRange);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderProgressColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleStartAngle(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleEndAngle(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSliderHandle(bool InShowSliderHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSliderHand(bool InShowSliderHand);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHandStartEndRatio(FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDefaultValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCenterBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularOffset(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedSliderHandlePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCustomDefaultValue() const;
    
};

