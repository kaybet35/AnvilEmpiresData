#pragma once
#include "CoreMinimal.h"
#include "CustomAttributeSetting.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCustomAttributeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Meaning;
    
    FCustomAttributeSetting();
};

