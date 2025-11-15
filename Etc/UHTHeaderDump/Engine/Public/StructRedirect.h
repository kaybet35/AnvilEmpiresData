#pragma once
#include "CoreMinimal.h"
#include "StructRedirect.generated.h"

USTRUCT(BlueprintType)
struct FStructRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OldStructName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewStructName;
    
    ENGINE_API FStructRedirect();
};

