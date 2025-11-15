#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessCopyBatch.h"
#include "PropertyAccessPath.h"
#include "PropertyAccessSegment.h"
#include "PropertyAccessLibrary.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessSegment> PathSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessPath> SrcPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessPath> DestPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessCopyBatch> CopyBatchArray;
    
public:
    ENGINE_API FPropertyAccessLibrary();
};

