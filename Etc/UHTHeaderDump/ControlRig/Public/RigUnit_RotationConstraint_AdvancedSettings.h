#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EEulerRotationOrder -FallbackName=EEulerRotationOrder
#include "EConstraintInterpType.h"
#include "RigUnit_RotationConstraint_AdvancedSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_RotationConstraint_AdvancedSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstraintInterpType InterpolationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEulerRotationOrder RotationOrderForFilter;
    
    CONTROLRIG_API FRigUnit_RotationConstraint_AdvancedSettings();
};

