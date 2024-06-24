#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AnvilDialogBox.generated.h"

class UAnvilButtonWidget;
class UComboBoxString;
class UEditableTextBox;
class USlider;
class UTextBlock;
class UThrobber;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAnvilDialogBox : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrobber* Throbber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SliderCurrentValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SliderMinValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SliderMaxValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextInputLabelTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* TextInputEditableTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* LeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* RightButton;
    
public:
    UAnvilDialogBox();

private:
    UFUNCTION(BlueprintCallable)
    void OnRightButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLeftButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    FText GetSliderCurrentValueText();
    
    UFUNCTION(BlueprintCallable)
    void FOnSliderValueChanged(const float Value);
    
};

