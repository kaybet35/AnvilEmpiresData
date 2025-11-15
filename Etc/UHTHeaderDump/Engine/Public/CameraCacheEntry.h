#pragma once
#include "CoreMinimal.h"
#include "MinimalViewInfo.h"
#include "CameraCacheEntry.generated.h"

USTRUCT(BlueprintType)
struct FCameraCacheEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimalViewInfo POV;
    
    ENGINE_API FCameraCacheEntry();
};

