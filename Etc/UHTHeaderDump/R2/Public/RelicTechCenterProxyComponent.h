#pragma once
#include "CoreMinimal.h"
#include "BasicItemCount.h"
#include "ProxyComponent.h"
#include "RelicTechCenterProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API URelicTechCenterProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicItemCount> RelicTechCosts;
    
    URelicTechCenterProxyComponent();

};

