#pragma once
#include "CoreMinimal.h"
#include "SoundModulationDestinationSettings.h"
#include "SoundModulationDefaultSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundModulationDefaultSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings VolumeModulationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings PitchModulationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings HighpassModulationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings LowpassModulationDestination;
    
    FSoundModulationDefaultSettings();
};

