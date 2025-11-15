#pragma once
#include "CoreMinimal.h"
#include "TTPropertyTrack.h"
#include "TTLinearColorTrack.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FTTLinearColorTrack : public FTTPropertyTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* CurveLinearColor;
    
    ENGINE_API FTTLinearColorTrack();
};

