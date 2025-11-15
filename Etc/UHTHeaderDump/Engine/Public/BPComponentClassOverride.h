#pragma once
#include "CoreMinimal.h"
#include "BPComponentClassOverride.generated.h"

USTRUCT(BlueprintType)
struct FBPComponentClassOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ComponentClass;
    
    ENGINE_API FBPComponentClassOverride();
};

