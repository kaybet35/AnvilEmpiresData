#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_GetAnimationChannelBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetAnimationChannelBase : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey CachedChannelKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedChannelHash;
    
    FRigUnit_GetAnimationChannelBase();
};

