#pragma once
#include "CoreMinimal.h"
#include "EAnvilToolType.h"
#include "HitConverterOutput.h"
#include "ProxyComponent.h"
#include "HitConverterProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UHitConverterProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitConverterOutput> OutputList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilToolType RequiredTool;
    
    UHitConverterProxyComponent();

};

