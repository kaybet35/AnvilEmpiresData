#pragma once
#include "CoreMinimal.h"
#include "EAnimGroupRole.h"
#include "EAnimSyncMethod.h"
#include "AnimationGroupReference.generated.h"

USTRUCT(BlueprintType)
struct FAnimationGroupReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimSyncMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    
    ENGINE_API FAnimationGroupReference();
};

