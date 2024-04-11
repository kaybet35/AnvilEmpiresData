#pragma once
#include "CoreMinimal.h"
#include "HeatingFuel.h"
#include "ProxyComponent.h"
#include "HeatingProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UHeatingProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeatingFuel> FuelList;
    
    UHeatingProxyComponent();

};

