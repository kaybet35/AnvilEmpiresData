#pragma once
#include "CoreMinimal.h"
#include "PlayerMappableKeyOptions.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPlayerMappableKeyOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayCategory;
    
    ENHANCEDINPUT_API FPlayerMappableKeyOptions();
};

