#pragma once
#include "CoreMinimal.h"
#include "HitConverterInput.h"
#include "Templates/SubclassOf.h"
#include "HitConverterOutput.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FHitConverterOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> OutputCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputCodeNameVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitConverterInput> InputList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitConverterInput> InputListVisVar;
    
    R2_API FHitConverterOutput();
};

