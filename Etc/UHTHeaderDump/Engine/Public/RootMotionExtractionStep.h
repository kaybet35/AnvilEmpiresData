#pragma once
#include "CoreMinimal.h"
#include "RootMotionExtractionStep.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRootMotionExtractionStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndPosition;
    
    ENGINE_API FRootMotionExtractionStep();
};

