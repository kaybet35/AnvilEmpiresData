#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "TemperatureProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UTemperatureProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePerFreezingTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StructureInteriorTempIncreasePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmStructureTempIncreasePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmStructureSearchRadius;
    
    UTemperatureProxyComponent();

};

