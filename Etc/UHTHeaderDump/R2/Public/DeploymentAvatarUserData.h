#pragma once
#include "CoreMinimal.h"
#include "AvatarProfile.h"
#include "EntityIdAndMapHash.h"
#include "DeploymentAvatarUserData.generated.h"

USTRUCT(BlueprintType)
struct FDeploymentAvatarUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntityIdAndMapHash EntityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAvatarProfile> AvatarProfiles;
    
    R2_API FDeploymentAvatarUserData();
};

