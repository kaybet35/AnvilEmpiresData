#pragma once
#include "CoreMinimal.h"
#include "ItemSlot.h"
#include "ProxyComponent.h"
#include "HandsProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UHandsProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemSlot> HandSlots;
    
    UHandsProxyComponent();

};

