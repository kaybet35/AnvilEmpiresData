#pragma once
#include "CoreMinimal.h"
#include "TypedElementSelectionNormalizationOptions.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSelectionNormalizationOptions {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpandGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowAttachment;
    
public:
    TYPEDELEMENTRUNTIME_API FTypedElementSelectionNormalizationOptions();
};

