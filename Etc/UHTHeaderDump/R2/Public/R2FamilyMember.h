#pragma once
#include "CoreMinimal.h"
#include "EAnvilR2FamilyRoleType.h"
#include "R2FamilyMember.generated.h"

USTRUCT(BlueprintType)
struct FR2FamilyMember {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 OnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilR2FamilyRoleType Role;
    
    R2_API FR2FamilyMember();
};

