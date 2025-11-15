#pragma once
#include "CoreMinimal.h"
#include "SoundModulationDestinationSettings.generated.h"

class USoundModulatorBase;

USTRUCT(BlueprintType)
struct ENGINE_API FSoundModulationDestinationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundModulatorBase* Modulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USoundModulatorBase*> Modulators;
    
    FSoundModulationDestinationSettings();
};

