#pragma once
#include "CoreMinimal.h"
#include "LODSoloTrack.generated.h"

USTRUCT(BlueprintType)
struct FLODSoloTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> SoloEnableSetting;
    
    ENGINE_API FLODSoloTrack();
};

