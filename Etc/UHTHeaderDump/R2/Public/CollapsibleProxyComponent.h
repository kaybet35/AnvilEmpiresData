#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "CollapsibleProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UCollapsibleProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSeparateCollapsedCollisions;
    
    UCollapsibleProxyComponent();

};

