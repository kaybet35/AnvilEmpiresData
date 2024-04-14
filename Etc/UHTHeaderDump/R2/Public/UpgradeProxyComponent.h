#pragma once
#include "CoreMinimal.h"
#include "BasicCount.h"
#include "ProxyComponent.h"
#include "Templates/SubclassOf.h"
#include "UpgradeProxyComponent.generated.h"

class UEntityTemplate;

UCLASS(Blueprintable, EditInlineNew)
class R2_API UUpgradeProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntityTemplate> UpgradeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TierPrerequisite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicCount> MaterialRequirements;
    
    UUpgradeProxyComponent();

};

