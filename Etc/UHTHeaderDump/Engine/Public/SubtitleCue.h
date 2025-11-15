#pragma once
#include "CoreMinimal.h"
#include "SubtitleCue.generated.h"

USTRUCT(BlueprintType)
struct FSubtitleCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ENGINE_API FSubtitleCue();
};

