#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "OptionsScreen.generated.h"

class UAnvilButtonWidget;
class UPanelWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UOptionsScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* OptionsPanel;
    
    UOptionsScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBackButtonClicked();
    
};

