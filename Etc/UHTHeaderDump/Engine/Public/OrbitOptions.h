#pragma once
#include "CoreMinimal.h"
#include "OrbitOptions.generated.h"

USTRUCT(BlueprintType)
struct FOrbitOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProcessDuringSpawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProcessDuringUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseEmitterTime: 1;
    
    ENGINE_API FOrbitOptions();
};

