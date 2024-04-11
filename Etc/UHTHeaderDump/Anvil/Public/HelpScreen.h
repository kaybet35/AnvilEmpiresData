#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "HelpScreen.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UHelpScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* HelpImageButton;
    
public:
    UHelpScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHelpImageButtonClicked();
    
};

