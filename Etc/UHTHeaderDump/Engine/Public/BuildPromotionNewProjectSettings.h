#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "BuildPromotionNewProjectSettings.generated.h"

USTRUCT(BlueprintType)
struct FBuildPromotionNewProjectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath NewProjectFolderOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewProjectNameOverride;
    
    ENGINE_API FBuildPromotionNewProjectSettings();
};

