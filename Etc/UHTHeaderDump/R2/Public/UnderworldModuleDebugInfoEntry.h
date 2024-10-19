#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnderworldModuleDebugInfoEntry.generated.h"

class UEntityTemplate;

USTRUCT(BlueprintType)
struct FUnderworldModuleDebugInfoEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntityTemplate> CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CodeNameVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumRotations;
    
    R2_API FUnderworldModuleDebugInfoEntry();
};

