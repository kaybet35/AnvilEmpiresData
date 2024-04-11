#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilBuildLocationType -FallbackName=EAnvilBuildLocationType
#include "BuildSiteList.h"
#include "AnvilAssetManager.generated.h"

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
    TMap<EAnvilBuildLocationType, FBuildSiteList> BuildSitesPerLocationMap;
    
public:
    FAnvilAssetManager();
};

