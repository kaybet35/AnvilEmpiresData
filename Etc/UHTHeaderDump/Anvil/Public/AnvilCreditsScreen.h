#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "AnvilCreditsScreen.generated.h"

class UAnvilButtonWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAnvilCreditsScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* CreditsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* BackButton;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UAnvilCreditsScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBackButtonClicked();
    
};

