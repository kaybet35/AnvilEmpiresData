#pragma once
#include "CoreMinimal.h"
#include "CachedKeyToActionInfo.generated.h"

class UPlayerInput;

USTRUCT(BlueprintType)
struct FCachedKeyToActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPlayerInput> PlayerInput;
    
    ENGINE_API FCachedKeyToActionInfo();
};

