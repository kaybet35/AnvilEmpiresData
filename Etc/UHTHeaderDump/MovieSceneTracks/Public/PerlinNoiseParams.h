#pragma once
#include "CoreMinimal.h"
#include "PerlinNoiseParams.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FPerlinNoiseParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    FPerlinNoiseParams();
};

