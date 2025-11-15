#pragma once
#include "CoreMinimal.h"
#include "TTTrackBase.h"
#include "TTEventTrack.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTTEventTrack : public FTTTrackBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveKeys;
    
    ENGINE_API FTTEventTrack();
};

