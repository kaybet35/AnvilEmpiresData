#pragma once
#include "CoreMinimal.h"
#include "DynamicPrefabSpawnInfo.h"
#include "ProxyComponent.h"
#include "DynamicPrefabProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UDynamicPrefabProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicPrefabSpawnInfo> PrefabSpawnList;
    
    UDynamicPrefabProxyComponent();

};

