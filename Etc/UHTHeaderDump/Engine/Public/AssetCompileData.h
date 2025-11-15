#pragma once
#include "CoreMinimal.h"
#include "AssetCompileData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FAssetCompileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Asset;
    
    ENGINE_API FAssetCompileData();
};

