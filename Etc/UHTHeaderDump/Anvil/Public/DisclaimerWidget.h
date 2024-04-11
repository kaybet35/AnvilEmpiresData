#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DisclaimerWidget.generated.h"

class UAnvilButtonWidget;
class UCheckBox;
class UEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDisclaimerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* DisclaimerCheckBox1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* DisclaimerCheckBox2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* DisclaimerCheckBox3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* DisclaimerCheckBox4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* AcceptTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ConfirmButton;
    
public:
    UDisclaimerWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnConfirmButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsConfirmButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsAcceptTextBoxEnabled();
    
};

