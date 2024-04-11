#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "EAudioRadialSliderLayout.h"
#include "OnAudioRadialSliderValueChangedEventDelegate.h"
#include "AudioRadialSlider.generated.h"

UCLASS(Blueprintable)
class AUDIOWIDGETS_API UAudioRadialSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioRadialSliderLayout> WidgetLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CenterBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderProgressColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HandStartEndRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnitsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextLabelBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowLabelOnlyOnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowUnitsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnitsTextReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsValueTextReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OutputRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioRadialSliderValueChangedEvent OnValueChanged;
    
    UAudioRadialSlider();

    UFUNCTION(BlueprintCallable)
    void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);
    
    UFUNCTION(BlueprintCallable)
    void SetValueTextReadOnly(const bool bIsReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitsText(const FText Units);
    
    UFUNCTION(BlueprintCallable)
    void SetTextLabelBackgroundColor(FSlateColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderThickness(const float InThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderProgressColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowUnitsText(const bool bShowUnitsText);
    
    UFUNCTION(BlueprintCallable)
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputRange(const FVector2D InOutputRange);
    
    UFUNCTION(BlueprintCallable)
    void SetHandStartEndRatio(const FVector2D InHandStartEndRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetCenterBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    float GetSliderValue(const float OutputValue);
    
    UFUNCTION(BlueprintCallable)
    float GetOutputValue(const float InSliderValue);
    
};

