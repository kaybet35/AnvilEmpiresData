#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnFloatValueChangedEventDelegate.h"
#include "AudioSliderBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AUDIOWIDGETS_API UAudioSliderBase : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnitsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextLabelBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor TextLabelBackgroundColorDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowLabelOnlyOnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowUnitsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnitsTextReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsValueTextReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor SliderBackgroundColorDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor SliderBarColorDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderThumbColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor SliderThumbColorDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WidgetBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor WidgetBackgroundColorDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatValueChangedEvent OnValueChanged;
    
    UAudioSliderBase();

    UFUNCTION(BlueprintCallable)
    void SetWidgetBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueTextReadOnly(const bool bIsReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitsText(const FText Units);
    
    UFUNCTION(BlueprintCallable)
    void SetTextLabelBackgroundColor(FSlateColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderThumbColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowUnitsText(const bool bShowUnitsText);
    
    UFUNCTION(BlueprintCallable)
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    
    UFUNCTION(BlueprintCallable)
    float GetSliderValue(const float OutputValue);
    
    UFUNCTION(BlueprintCallable)
    float GetOutputValue(const float InSliderValue);
    
    UFUNCTION(BlueprintCallable)
    float GetLinValue(const float OutputValue);
    
};

