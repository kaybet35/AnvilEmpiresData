#pragma once
#include "CoreMinimal.h"
#include "PBIKDebug.generated.h"

USTRUCT(BlueprintType)
struct FPBIKDebug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    PBIK_API FPBIKDebug();
};

