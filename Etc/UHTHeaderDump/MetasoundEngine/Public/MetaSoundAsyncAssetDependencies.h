#pragma once
#include "CoreMinimal.h"
#include "MetaSoundAsyncAssetDependencies.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMetaSoundAsyncAssetDependencies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Metasound;
    
    METASOUNDENGINE_API FMetaSoundAsyncAssetDependencies();
};

