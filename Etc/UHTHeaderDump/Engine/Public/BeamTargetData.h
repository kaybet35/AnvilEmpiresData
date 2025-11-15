#pragma once
#include "CoreMinimal.h"
#include "BeamTargetData.generated.h"

USTRUCT(BlueprintType)
struct FBeamTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPercentage;
    
    ENGINE_API FBeamTargetData();
};

