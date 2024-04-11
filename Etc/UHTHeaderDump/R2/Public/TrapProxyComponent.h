#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "TrapProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UTrapProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTrapDurationSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimalBleedDamagePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedAnimalEscapeChance;
    
    UTrapProxyComponent();

};

