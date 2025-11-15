#pragma once
#include "CoreMinimal.h"
#include "TypedElementDeletionOptions.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementDeletionOptions {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVerifyDeletionCanHappen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnAboutReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnAboutSoftReferences;
    
public:
    ENGINE_API FTypedElementDeletionOptions();
};

