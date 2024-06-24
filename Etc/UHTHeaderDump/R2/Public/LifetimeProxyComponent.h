#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "LifetimeProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API ULifetimeProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DropResourceOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetIfObserved;
    
    ULifetimeProxyComponent();

};

