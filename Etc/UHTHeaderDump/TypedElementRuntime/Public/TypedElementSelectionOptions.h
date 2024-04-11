#pragma once
#include "CoreMinimal.h"
#include "ETypedElementChildInclusionMethod.h"
#include "TypedElementSelectionOptions.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSelectionOptions {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowLegacyNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnIfLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETypedElementChildInclusionMethod ChildElementInclusionMethod;
    
public:
    TYPEDELEMENTRUNTIME_API FTypedElementSelectionOptions();
};

