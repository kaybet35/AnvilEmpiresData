#pragma once
#include "CoreMinimal.h"
#include "FamilyHouseInfoType.h"
#include "PledgeInfoType.h"
#include "PlayerAgeDeployData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAgeDeployData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFamilyHouseInfoType FamilyHouseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPledgeInfoType PledgedTownHallInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPledgeInfoType PledgedMilitiaInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AllowedToSpawnUnixTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfflineCharacterServerName;
    
    R2_API FPlayerAgeDeployData();
};

