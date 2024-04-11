#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EEulerRotationOrder -FallbackName=EEulerRotationOrder
#include "EConstraintInterpType.h"
#include "RigUnit_ParentConstraint_AdvancedSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ParentConstraint_AdvancedSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstraintInterpType InterpolationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEulerRotationOrder RotationOrderForFilter;
    
    CONTROLRIG_API FRigUnit_ParentConstraint_AdvancedSettings();
};

