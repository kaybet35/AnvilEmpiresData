#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "Templates/SubclassOf.h"
#include "DynamicPrefabProxyComponent.generated.h"

class ADynamicPrefab;

UCLASS(Blueprintable, EditInlineNew)
class R2_API UDynamicPrefabProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADynamicPrefab> PrefabCodeName;
    
    UDynamicPrefabProxyComponent();

};

