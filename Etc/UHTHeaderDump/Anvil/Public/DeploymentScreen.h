#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AnvilScreen.h"
#include "DeploymentScreen.generated.h"

class UAnvilButtonWidget;
class UDeploymentMapWidget;
class UTextBlock;
class UThrobber;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDeploymentScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeploymentMapWidget* MapWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrobber* Throbber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* LogoutButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ConnectingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DeploymentInstructionOrSpawnTimerText;
    
public:
    UDeploymentScreen();

private:
    UFUNCTION(BlueprintCallable)
    void OnLogoutButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetThrobberVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetDeploymentInstructionOrSpawnTimerText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetConnectingTextVisibility();
    
};

