#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DemoWidget.generated.h"

class UAnvilButtonWidget;
class UButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDemoWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NextTestText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CountdownHeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CountdownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ConfirmButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DiscordButton;
    
public:
    UDemoWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateText();
    
    UFUNCTION(BlueprintCallable)
    void OnDiscordButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmButtonClicked();
    
};

