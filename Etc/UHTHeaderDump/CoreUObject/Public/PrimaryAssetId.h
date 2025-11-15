#pragma once
#include "CoreMinimal.h"
#include "PrimaryAssetType.h"
#include "PrimaryAssetId.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FPrimaryAssetId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPrimaryAssetType PrimaryAssetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName PrimaryAssetName;
    
    COREUOBJECT_API FPrimaryAssetId();
};

