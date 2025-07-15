#pragma once
#include "CoreMinimal.h"
#include "InventorySlot.h"
#include "ProxyComponent.h"
#include "HandsProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UHandsProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventorySlot> HandSlots;
    
    UHandsProxyComponent();

};

