#pragma once
#include "CoreMinimal.h"
#include "ESyncOption.h"
#include "ComponentSync.generated.h"

USTRUCT(BlueprintType)
struct FComponentSync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESyncOption SyncOption;
    
    ENGINE_API FComponentSync();
};

