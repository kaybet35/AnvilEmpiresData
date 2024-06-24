#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "TavernBuffConfig.h"
#include "TavernProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UTavernProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTavernBuffConfig> Buffs;
    
    UTavernProxyComponent();

};

