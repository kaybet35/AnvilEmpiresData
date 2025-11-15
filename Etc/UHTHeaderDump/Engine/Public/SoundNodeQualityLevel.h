#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeQualityLevel.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeQualityLevel : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CookedQualityLevelIndex;
    
    USoundNodeQualityLevel();

};

