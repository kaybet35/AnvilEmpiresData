#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ProxyComponent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R2_API UProxyComponent : public UObject {
    GENERATED_BODY()
public:
    UProxyComponent();

};

