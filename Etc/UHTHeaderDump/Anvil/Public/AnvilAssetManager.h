#pragma once
#include "CoreMinimal.h"
#include "AnvilAssetManager.generated.h"

class AVisBuildSite;
class UObjectLibrary;

USTRUCT(BlueprintType)
struct ANVIL_API FAnvilAssetManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* EntityTemplateObjectLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* ItemTemplateObjectLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* VisItemObjectLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVisBuildSite*> BuildSiteList;
    
public:
    FAnvilAssetManager();
};

