#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "AnimalRopeAttachableProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UAnimalRopeAttachableProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowSpeed;
    
    UAnimalRopeAttachableProxyComponent();

};

