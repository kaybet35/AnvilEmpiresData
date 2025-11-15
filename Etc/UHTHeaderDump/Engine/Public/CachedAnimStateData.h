#pragma once
#include "CoreMinimal.h"
#include "CachedAnimStateData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedAnimStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    FCachedAnimStateData();
};

