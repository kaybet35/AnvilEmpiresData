#pragma once
#include "CoreMinimal.h"
#include "AssetBundleEntry.h"
#include "AssetBundleData.generated.h"

USTRUCT(BlueprintType, NoExport)
struct COREUOBJECT_API FAssetBundleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetBundleEntry> Bundles;
    
    FAssetBundleData();
};

