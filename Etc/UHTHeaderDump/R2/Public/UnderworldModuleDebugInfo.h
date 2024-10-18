#pragma once
#include "CoreMinimal.h"
#include "UnderworldModuleDebugInfoEntry.h"
#include "UnderworldModuleDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FUnderworldModuleDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnderworldModuleDebugInfoEntry> Modules;
    
    R2_API FUnderworldModuleDebugInfo();
};

