#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "NextTestWidget.generated.h"

class UAnvilButtonWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UNextTestWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NextTestText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CountdownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ReturnButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* DiscordButton;
    
public:
    UNextTestWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateText();
    
    UFUNCTION(BlueprintCallable)
    void OnReturnButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDiscordButtonClicked();
    
};

