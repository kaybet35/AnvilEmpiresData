#pragma once
#include "CoreMinimal.h"
#include "PerPlatformBool.h"
#include "PerPlatformInt.h"
#include "SkinWeightProfileInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkinWeightProfileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformBool DefaultProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt DefaultProfileFromLODIndex;
    
    ENGINE_API FSkinWeightProfileInfo();
};

