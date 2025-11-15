#pragma once
#include "CoreMinimal.h"
#include "SoundNodeDistanceCrossFade.h"
#include "SoundNodeParamCrossFade.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    USoundNodeParamCrossFade();

};

