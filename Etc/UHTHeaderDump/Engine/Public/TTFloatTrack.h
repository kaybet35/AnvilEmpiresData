#pragma once
#include "CoreMinimal.h"
#include "TTPropertyTrack.h"
#include "TTFloatTrack.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTTFloatTrack : public FTTPropertyTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveFloat;
    
    ENGINE_API FTTFloatTrack();
};

