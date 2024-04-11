#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigUnit.h"
#include "RigUnit_GetBoneTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetBoneTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneGetterSetterMode Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedBone;
    
    FRigUnit_GetBoneTransform();
};

