#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "TownMarkerProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UTownMarkerProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceRadius;
    
    UTownMarkerProxyComponent();

};

