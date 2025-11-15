#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeModulator.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeModulator : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMax;
    
    USoundNodeModulator();

};

