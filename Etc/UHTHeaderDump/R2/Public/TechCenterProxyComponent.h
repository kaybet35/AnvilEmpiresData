#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "TechCenterProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UTechCenterProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> TechCountList;
    
    UTechCenterProxyComponent();

};

