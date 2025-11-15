#pragma once
#include "CoreMinimal.h"
#include "ModulatorContinuousParams.h"
#include "SoundNode.h"
#include "SoundNodeModulatorContinuous.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeModulatorContinuous : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModulatorContinuousParams PitchModulationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModulatorContinuousParams VolumeModulationParams;
    
    USoundNodeModulatorContinuous();

};

