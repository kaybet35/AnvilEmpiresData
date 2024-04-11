#pragma once
#include "CoreMinimal.h"
#include "EAnvilRareResourceAreaType.h"
#include "ProxyComponent.h"
#include "RareResourceAreaMarkerProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API URareResourceAreaMarkerProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilRareResourceAreaType RareResourceAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaRadius;
    
    URareResourceAreaMarkerProxyComponent();

};

