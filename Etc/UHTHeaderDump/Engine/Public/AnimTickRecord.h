#pragma once
#include "CoreMinimal.h"
#include "AnimTickRecord.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FAnimTickRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* SourceAsset;
    
    ENGINE_API FAnimTickRecord();
};

