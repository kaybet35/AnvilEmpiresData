#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformFilter -FallbackName=TransformFilter
#include "CachedRigElement.h"
#include "ConstraintParent.h"
#include "RigElementKey.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_ParentConstraint_AdvancedSettings.h"
#include "RigUnit_ParentConstraint.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransformFilter Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstraintParent> Parents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement ChildCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedRigElement> ParentCaches;
    
    CONTROLRIG_API FRigUnit_ParentConstraint();
};

