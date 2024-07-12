#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "DeploymentScreen.generated.h"

class UAnvilButtonWidget;
class UDeploymentMapWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDeploymentScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeploymentMapWidget* MapWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* LogoutButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DeploymentInstructionOrSpawnTimerText;
    
public:
    UDeploymentScreen();

private:
    UFUNCTION(BlueprintCallable)
    void OnLogoutButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    FText GetDeploymentInstructionOrSpawnTimerText();
    
};

