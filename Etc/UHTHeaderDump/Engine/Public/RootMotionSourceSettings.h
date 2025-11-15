#pragma once
#include "CoreMinimal.h"
#include "RootMotionSourceSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRootMotionSourceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    FRootMotionSourceSettings();
};

