#pragma once
#include "CoreMinimal.h"
#include "TestStruct.generated.h"

USTRUCT(BlueprintType)
struct FTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    R2_API FTestStruct();
};

