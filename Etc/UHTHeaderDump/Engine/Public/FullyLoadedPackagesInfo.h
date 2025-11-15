#pragma once
#include "CoreMinimal.h"
#include "EFullyLoadPackageType.h"
#include "FullyLoadedPackagesInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFullyLoadedPackagesInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFullyLoadPackageType> FullyLoadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PackagesToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedObjects;
    
    ENGINE_API FFullyLoadedPackagesInfo();
};

