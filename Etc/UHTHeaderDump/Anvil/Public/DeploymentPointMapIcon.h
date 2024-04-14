#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "WorldEntityMapIcon.h"
#include "DeploymentPointMapIcon.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDeploymentPointMapIcon : public UWorldEntityMapIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MapItemButton;
    
public:
    UDeploymentPointMapIcon();

private:
    UFUNCTION(BlueprintCallable)
    void OnDeploymentPointClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsDeploymentPointEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetDeploymentPointVisibility();
    
};

