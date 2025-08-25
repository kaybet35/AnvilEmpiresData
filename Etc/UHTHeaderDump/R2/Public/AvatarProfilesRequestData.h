#pragma once
#include "CoreMinimal.h"
#include "AvatarProfile.h"
#include "AvatarProfilesRequestData.generated.h"

USTRUCT(BlueprintType)
struct FAvatarProfilesRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAvatarProfile> Profiles;
    
    R2_API FAvatarProfilesRequestData();
};

