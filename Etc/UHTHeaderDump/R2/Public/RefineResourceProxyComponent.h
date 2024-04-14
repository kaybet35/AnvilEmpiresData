#pragma once
#include "CoreMinimal.h"
#include "ProducableItem.h"
#include "ProxyComponent.h"
#include "RefineResourceProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API URefineResourceProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProducableItem> ProducableItemList;
    
    URefineResourceProxyComponent();

};

