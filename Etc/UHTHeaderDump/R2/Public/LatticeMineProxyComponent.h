#pragma once
#include "CoreMinimal.h"
#include "LatticeMineProxyData.h"
#include "ProxyComponent.h"
#include "LatticeMineProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API ULatticeMineProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLatticeMineProxyData Data;
    
    ULatticeMineProxyComponent();

};

