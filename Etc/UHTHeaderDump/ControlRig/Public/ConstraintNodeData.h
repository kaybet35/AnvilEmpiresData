#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=ConstraintOffset -FallbackName=ConstraintOffset
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformConstraint -FallbackName=TransformConstraint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ConstraintNodeData.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FConstraintNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstraintOffset ConstraintOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedNode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransformConstraint> Constraints;
    
public:
    FConstraintNodeData();
};

