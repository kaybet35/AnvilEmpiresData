#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnvilOutput.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FAnvilOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> OutputCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputCodeNameVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHitsToConvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetHeat;
    
    R2_API FAnvilOutput();
};

