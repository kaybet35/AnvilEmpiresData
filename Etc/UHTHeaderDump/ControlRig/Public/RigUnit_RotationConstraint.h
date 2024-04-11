#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=FilterOptionPerAxis -FallbackName=FilterOptionPerAxis
#include "ConstraintParent.h"
#include "RigElementKey.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_RotationConstraint_AdvancedSettings.h"
#include "RigUnit_RotationConstraint.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable {
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
    FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    CONTROLRIG_API FRigUnit_RotationConstraint();
};

