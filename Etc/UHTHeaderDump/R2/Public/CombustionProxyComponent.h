#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "Templates/SubclassOf.h"
#include "CombustionProxyComponent.generated.h"

class UItemTemplate;

UCLASS(Blueprintable, EditInlineNew)
class R2_API UCombustionProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateAsh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItemTemplate>> OverrideAcceptableFuels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelTimeMultiplier;
    
    UCombustionProxyComponent();

};

