#pragma once
#include "CoreMinimal.h"
#include "ISMComponentInstance.generated.h"

USTRUCT(BlueprintType)
struct FISMComponentInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceSubIndex;
    
    ENGINE_API FISMComponentInstance();
};

