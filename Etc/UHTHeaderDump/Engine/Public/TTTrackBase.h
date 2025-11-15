#pragma once
#include "CoreMinimal.h"
#include "TTTrackBase.generated.h"

USTRUCT(BlueprintType)
struct FTTTrackBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExternalCurve;
    
    ENGINE_API FTTTrackBase();
};

