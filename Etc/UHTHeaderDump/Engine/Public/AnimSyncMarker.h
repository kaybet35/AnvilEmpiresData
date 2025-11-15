#pragma once
#include "CoreMinimal.h"
#include "AnimSyncMarker.generated.h"

USTRUCT(BlueprintType)
struct FAnimSyncMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MarkerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ENGINE_API FAnimSyncMarker();
};

