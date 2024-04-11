#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "RepTestProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API URepTestProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BytesToRep;
    
    URepTestProxyComponent();

};

