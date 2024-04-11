#pragma once
#include "CoreMinimal.h"
#include "TargetChainFKSettings.h"
#include "TargetChainIKSettings.h"
#include "TargetChainSpeedPlantSettings.h"
#include "TargetChainSettings.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FTargetChainSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetChainFKSettings FK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetChainIKSettings IK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetChainSpeedPlantSettings SpeedPlanting;
    
    FTargetChainSettings();
};

