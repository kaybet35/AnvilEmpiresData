#pragma once
#include "CoreMinimal.h"
#include "EAnvilToolType.h"
#include "HitConverterOutput.h"
#include "ProxyComponent.h"
#include "Templates/SubclassOf.h"
#include "HitConverterProxyComponent.generated.h"

class UItemTemplate;

UCLASS(Blueprintable, EditInlineNew)
class R2_API UHitConverterProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> InputItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitConverterOutput> ConverterOutputList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilToolType RequiredTool;
    
    UHitConverterProxyComponent();

};

