#pragma once
#include "CoreMinimal.h"
#include "FamilyMemberData.generated.h"

USTRUCT(BlueprintType)
struct FFamilyMemberData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PlayerId;
    
    R2_API FFamilyMemberData();
};

