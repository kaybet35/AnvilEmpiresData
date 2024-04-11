#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OptionsMenuKeybindWidget.generated.h"

class UAnvilButtonWidget;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UOptionsMenuKeybindWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* KeybindWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ResetButton;
    
public:
    UOptionsMenuKeybindWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnResetKeyBinds();
    
};

