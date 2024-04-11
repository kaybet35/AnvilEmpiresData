#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=FilterOptionPerAxis -FallbackName=FilterOptionPerAxis
#include "ConstraintParent.h"
#include "RigElementKey.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_PositionConstraint.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterOptionPerAxis Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstraintParent> Parents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    CONTROLRIG_API FRigUnit_PositionConstraint();
};

