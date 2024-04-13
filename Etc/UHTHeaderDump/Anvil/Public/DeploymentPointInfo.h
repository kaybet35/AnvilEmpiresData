#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EDeploymentPointType.h"
#include "TownHallDeploymentInfo.h"
#include "DeploymentPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FDeploymentPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeploymentPointType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CodeName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 EntityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTownHallDeploymentInfo TownHallDeploymentInfo;
    
    ANVIL_API FDeploymentPointInfo();
};

