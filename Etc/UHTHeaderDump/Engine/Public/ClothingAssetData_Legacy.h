#pragma once
#include "CoreMinimal.h"
#include "ClothPhysicsProperties_Legacy.h"
#include "ClothingAssetData_Legacy.generated.h"

USTRUCT(BlueprintType)
struct FClothingAssetData_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ApexFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClothPropertiesChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothPhysicsProperties_Legacy PhysicsProperties;
    
    ENGINE_API FClothingAssetData_Legacy();
};

