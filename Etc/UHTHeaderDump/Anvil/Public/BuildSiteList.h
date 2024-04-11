#pragma once
#include "CoreMinimal.h"
#include "BuildSiteList.generated.h"

class AVisBuildSite;

USTRUCT(BlueprintType)
struct FBuildSiteList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVisBuildSite*> List;
    
    ANVIL_API FBuildSiteList();
};

