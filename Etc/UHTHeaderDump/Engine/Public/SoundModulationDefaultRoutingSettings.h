#pragma once
#include "CoreMinimal.h"
#include "EModulationRouting.h"
#include "SoundModulationDefaultSettings.h"
#include "SoundModulationDefaultRoutingSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundModulationDefaultRoutingSettings : public FSoundModulationDefaultSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModulationRouting VolumeRouting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModulationRouting PitchRouting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModulationRouting HighpassRouting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModulationRouting LowpassRouting;
    
    FSoundModulationDefaultRoutingSettings();
};

