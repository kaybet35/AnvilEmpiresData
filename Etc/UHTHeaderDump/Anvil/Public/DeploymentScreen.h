#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AnvilScreen.h"
#include "DeploymentScreen.generated.h"

class UAnvilButtonWidget;
class UButton;
class UDeploymentFoodWidget;
class UDeploymentMapWidget;
class UTextBlock;
class UVerticalBox;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeploymentFoodWidget* DeploymentFoodWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FamilyCenterDeployButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* FamilyCenterDeployWidget;
    
public:
    UDeploymentScreen();

private:
    UFUNCTION(BlueprintCallable)
    void OnLogoutButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnFamilyCenterDeployButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsFamilyCenterDeployButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetFamilyCenterDeployWidgetVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetDeploymentInstructionOrSpawnTimerText();
    
};

