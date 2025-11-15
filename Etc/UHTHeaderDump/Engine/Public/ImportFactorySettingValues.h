#pragma once
#include "CoreMinimal.h"
#include "ImportFactorySettingValues.generated.h"

USTRUCT(BlueprintType)
struct FImportFactorySettingValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SettingName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ENGINE_API FImportFactorySettingValues();
};

