#pragma once
#include "CoreMinimal.h"
#include "TopLevelAssetPath.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FTopLevelAssetPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
public:
    COREUOBJECT_API FTopLevelAssetPath();
};

