#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=DeploymentAvatarUserData -FallbackName=DeploymentAvatarUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DeploymentAvatarWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDeploymentAvatarWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DebugText;
    
public:
    UDeploymentAvatarWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnDataUpdated(const FDeploymentAvatarUserData& UserData);
    
};

