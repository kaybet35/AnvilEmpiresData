#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AnvilSliderWidget.generated.h"

class USlider;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAnvilSliderWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyLabel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SliderLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* Slider;
    
public:
    UAnvilSliderWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnSliderChanged(const float Value);
    
};

