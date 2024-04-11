#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "ProxyComponent.h"
#include "PickupProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UPickupProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemCount Item;
    
    UPickupProxyComponent();

};

