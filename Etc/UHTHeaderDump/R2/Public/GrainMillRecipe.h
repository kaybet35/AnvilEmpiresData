#pragma once
#include "CoreMinimal.h"
#include "BasicItemCount.h"
#include "GrainMillRecipe.generated.h"

USTRUCT(BlueprintType)
struct FGrainMillRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicItemCount> InputItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicItemCount OutputItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProductionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetCoarseness;
    
    R2_API FGrainMillRecipe();
};

