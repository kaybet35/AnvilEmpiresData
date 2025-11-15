#pragma once
#include "CoreMinimal.h"
#include "DistanceDatum.h"
#include "SoundNode.h"
#include "SoundNodeDistanceCrossFade.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeDistanceCrossFade : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Export, meta=(AllowPrivateAccess=true))
    TArray<FDistanceDatum> CrossFadeInput;
    
    USoundNodeDistanceCrossFade();

};

