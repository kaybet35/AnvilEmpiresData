#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_GetAnimationChannelBase.h"
#include "RigUnit_GetVectorAnimationChannel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    FRigUnit_GetVectorAnimationChannel();
};

