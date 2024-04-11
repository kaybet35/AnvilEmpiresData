#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ExplodedViewDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FExplodedViewDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UniformScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    GEOMETRYCOLLECTIONNODES_API FExplodedViewDataflowNode();
};

