#pragma once
#include "CoreMinimal.h"
#include "RootMotionSourceSettings.h"
#include "Vector_NetQuantize10.h"
#include "RootMotionSourceGroup.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRootMotionSourceGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasAdditiveSources: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasOverrideSources: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasOverrideSourcesWithIgnoreZAccumulate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAdditiveVelocityApplied: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionSourceSettings LastAccumulatedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 LastPreAdditiveVelocity;
    
    FRootMotionSourceGroup();
};

