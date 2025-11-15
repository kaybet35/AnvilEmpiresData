#pragma once
#include "CoreMinimal.h"
#include "EPostCopyOperation.h"
#include "ExposedValueCopyRecord.generated.h"

USTRUCT(BlueprintType)
struct FExposedValueCopyRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CopyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostCopyOperation PostCopyOperation;
    
    ENGINE_API FExposedValueCopyRecord();
};

