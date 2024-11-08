#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MinDistBetweenStructsEntry.generated.h"

class UEntityTemplate;

USTRUCT(BlueprintType)
struct FMinDistBetweenStructsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntityTemplate> CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CodeNameVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumLimit;
    
    R2_API FMinDistBetweenStructsEntry();
};

