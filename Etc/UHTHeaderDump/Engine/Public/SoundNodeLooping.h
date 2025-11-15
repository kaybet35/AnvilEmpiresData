#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeLooping.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeLooping : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoopIndefinitely: 1;
    
    USoundNodeLooping();

};

