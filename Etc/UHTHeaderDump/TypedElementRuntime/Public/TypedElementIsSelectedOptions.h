#pragma once
#include "CoreMinimal.h"
#include "TypedElementIsSelectedOptions.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementIsSelectedOptions {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowIndirect;
    
public:
    TYPEDELEMENTRUNTIME_API FTypedElementIsSelectedOptions();
};

