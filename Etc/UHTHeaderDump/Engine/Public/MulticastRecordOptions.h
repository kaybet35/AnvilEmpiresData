#pragma once
#include "CoreMinimal.h"
#include "MulticastRecordOptions.generated.h"

USTRUCT(BlueprintType)
struct FMulticastRecordOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FuncPathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServerSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientSkip;
    
    ENGINE_API FMulticastRecordOptions();
};

