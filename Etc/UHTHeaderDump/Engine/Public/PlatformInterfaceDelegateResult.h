#pragma once
#include "CoreMinimal.h"
#include "PlatformInterfaceData.h"
#include "PlatformInterfaceDelegateResult.generated.h"

USTRUCT(BlueprintType)
struct FPlatformInterfaceDelegateResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformInterfaceData Data;
    
    ENGINE_API FPlatformInterfaceDelegateResult();
};

