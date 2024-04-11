#pragma once
#include "CoreMinimal.h"
#include "CacheEventTrack.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct FCacheEventTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* Struct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TimeStamps;
    
    CHAOSCACHING_API FCacheEventTrack();
};

