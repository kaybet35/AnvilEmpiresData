#pragma once
#include "CoreMinimal.h"
#include "FOscillator.h"
#include "ROscillator.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYCAMERAS_API FROscillator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator Roll;
    
    FROscillator();
};

