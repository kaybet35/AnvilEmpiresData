#pragma once
#include "CoreMinimal.h"
#include "EAlphaBlendOption.h"
#include "AlphaBlend.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ENGINE_API FAlphaBlend {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption BlendOption;
    
public:
    FAlphaBlend();
};

