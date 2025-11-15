#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "QuaternionAnimationAttribute.generated.h"

USTRUCT(BlueprintType)
struct FQuaternionAnimationAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Value;
    
    ENGINE_API FQuaternionAnimationAttribute();
};

