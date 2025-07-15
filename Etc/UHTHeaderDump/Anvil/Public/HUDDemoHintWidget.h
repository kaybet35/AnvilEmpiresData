#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HUDDemoHintWidget.generated.h"

class UAnvilButtonWidget;
class UButton;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UHUDDemoHintWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* HelpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* HintMaximizeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* HintMinimizeButton;
    
public:
    UHUDDemoHintWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnHintMinimizeClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnHintMaximizeClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnHelpButtonClicked();
    
};

