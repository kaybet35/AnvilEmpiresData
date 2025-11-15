#pragma once
#include "CoreMinimal.h"
#include "TTTrackBase.h"
#include "TTPropertyTrack.generated.h"

USTRUCT(BlueprintType)
struct FTTPropertyTrack : public FTTTrackBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
public:
    ENGINE_API FTTPropertyTrack();
};

