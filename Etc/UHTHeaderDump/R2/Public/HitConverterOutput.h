#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitConverterOutput.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FHitConverterOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> OutputItemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputItemCodeName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumHitsToConvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetHeat;
    
    R2_API FHitConverterOutput();
};

