#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "MapIntelProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UMapIntelProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayLengthSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NightStartSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NightEndSeconds;
    
    UMapIntelProxyComponent();

};

