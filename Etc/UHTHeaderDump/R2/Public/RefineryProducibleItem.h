#pragma once
#include "CoreMinimal.h"
#include "GridItem.h"
#include "RefineryProducibleItemCost.h"
#include "RefineryProducibleItem.generated.h"

USTRUCT(BlueprintType)
struct R2_API FRefineryProducibleItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGridItem Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRefineryProducibleItemCost> Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresResearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrateProducedItems;
    
    FRefineryProducibleItem();
};

