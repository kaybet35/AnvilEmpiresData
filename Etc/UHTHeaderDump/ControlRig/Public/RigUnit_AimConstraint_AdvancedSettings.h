#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EEulerRotationOrder -FallbackName=EEulerRotationOrder
#include "RigUnit_AimBone_DebugSettings.h"
#include "RigUnit_AimConstraint_AdvancedSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AimConstraint_AdvancedSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_AimBone_DebugSettings DebugSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEulerRotationOrder RotationOrderForFilter;
    
    CONTROLRIG_API FRigUnit_AimConstraint_AdvancedSettings();
};

