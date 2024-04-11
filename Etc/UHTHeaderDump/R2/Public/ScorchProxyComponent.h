#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "ScorchProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UScorchProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnRate;
    
    UScorchProxyComponent();

};

