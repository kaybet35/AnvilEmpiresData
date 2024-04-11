#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "CreateNonOverlappingConvexHullsDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanRemoveFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanExceedFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimplificationDistanceThreshold;
    
    GEOMETRYCOLLECTIONNODES_API FCreateNonOverlappingConvexHullsDataflowNode();
};

