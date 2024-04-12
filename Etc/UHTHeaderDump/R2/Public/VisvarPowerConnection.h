#pragma once
#include "CoreMinimal.h"
#include "VisvarPowerConnection.generated.h"

USTRUCT(BlueprintType)
struct FVisvarPowerConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterWidth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
    R2_API FVisvarPowerConnection();
};

