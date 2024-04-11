#pragma once
#include "CoreMinimal.h"
#include "StateStruct.generated.h"

USTRUCT(BlueprintType)
struct NETCORE_API FStateStruct {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StateName;
    
public:
    FStateStruct();
};

