#pragma once
#include "CoreMinimal.h"
#include "R2RequestToJoinFamilyRequest.generated.h"

USTRUCT(BlueprintType)
struct FR2RequestToJoinFamilyRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TargetMarkerEntityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetMarkerMapHash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RequesterOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequesterPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RequesterTeamId;
    
    R2_API FR2RequestToJoinFamilyRequest();
};

