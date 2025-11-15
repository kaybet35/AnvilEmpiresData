#pragma once
#include "CoreMinimal.h"
#include "ParticleCurvePair.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FParticleCurvePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CurveObject;
    
    ENGINE_API FParticleCurvePair();
};

