#pragma once
#include "CoreMinimal.h"
#include "CustomDefine.generated.h"

USTRUCT(BlueprintType)
struct FCustomDefine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefineValue;
    
    ENGINE_API FCustomDefine();
};

