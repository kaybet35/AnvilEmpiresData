#pragma once
#include "CoreMinimal.h"
#include "RepRootMotionMontage.h"
#include "SimulatedRootMotionReplicatedMove.generated.h"

USTRUCT(BlueprintType)
struct FSimulatedRootMotionReplicatedMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepRootMotionMontage RootMotion;
    
    ENGINE_API FSimulatedRootMotionReplicatedMove();
};

