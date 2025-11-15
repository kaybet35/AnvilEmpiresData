#pragma once
#include "CoreMinimal.h"
#include "MarkerSyncAnimPosition.generated.h"

USTRUCT(BlueprintType)
struct FMarkerSyncAnimPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousMarkerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextMarkerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionBetweenMarkers;
    
    ENGINE_API FMarkerSyncAnimPosition();
};

