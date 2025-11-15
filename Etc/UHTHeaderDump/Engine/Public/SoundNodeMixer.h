#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeMixer.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeMixer : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Export, meta=(AllowPrivateAccess=true))
    TArray<float> InputVolume;
    
    USoundNodeMixer();

};

