#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_SecondsToFrames.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SecondsToFrames : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frames;
    
    FRigUnit_SecondsToFrames();
};

