#pragma once
#include "CoreMinimal.h"
#include "PlayerAgeDeployData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAgeDeployData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FamilyHouseInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PledgedTownHallInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PledgedMilitiaInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AllowedToSpawnUnixTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfflineCharacterServerName;
    
    R2_API FPlayerAgeDeployData();
};

