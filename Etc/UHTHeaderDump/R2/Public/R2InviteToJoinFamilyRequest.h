#pragma once
#include "CoreMinimal.h"
#include "R2InviteToJoinFamilyRequest.generated.h"

USTRUCT(BlueprintType)
struct FR2InviteToJoinFamilyRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TargetFamilyMarkerEntityId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InviterOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InviterPlayerName;
    
    R2_API FR2InviteToJoinFamilyRequest();
};

