#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EFBIKBoneLimitType.h"
#include "FBIKBoneLimit.generated.h"

USTRUCT(BlueprintType)
struct FFBIKBoneLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFBIKBoneLimitType LimitType_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFBIKBoneLimitType LimitType_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFBIKBoneLimitType LimitType_Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Limit;
    
    FULLBODYIK_API FFBIKBoneLimit();
};

