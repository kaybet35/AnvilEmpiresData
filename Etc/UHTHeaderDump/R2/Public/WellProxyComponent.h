#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "WellProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UWellProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaterGenerationTimeSec;
    
    UWellProxyComponent();

};

