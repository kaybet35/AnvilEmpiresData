#pragma once
#include "CoreMinimal.h"
#include "IrisNetDriverConfig.generated.h"

USTRUCT(BlueprintType)
struct FIrisNetDriverConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NetDriverDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NetDriverName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NetDriverWildcardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIris;
    
    ENGINE_API FIrisNetDriverConfig();
};

