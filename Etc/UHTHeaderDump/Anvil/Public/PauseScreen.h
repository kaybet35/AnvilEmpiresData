#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "PauseScreen.generated.h"

class UAnvilButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UPauseScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ResumeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* OptionsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* HelpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* CodeOfConductButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* LogOffButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ExitButton;
    
public:
    UPauseScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnOptionsButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLogOffButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnHelpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnExitButtonConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void OnExitButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnContinueButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCodeOfConductButtonClicked();
    
};

