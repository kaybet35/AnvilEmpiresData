#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_EndProfilingTimer.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfMeasurements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Prefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeasurementsLeft;
    
    FRigUnit_EndProfilingTimer();
};

