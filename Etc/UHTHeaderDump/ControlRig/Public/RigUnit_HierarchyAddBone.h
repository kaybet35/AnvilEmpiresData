#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBoneGetterSetterMode.h"
#include "RigUnit_HierarchyAddElement.h"
#include "RigUnit_HierarchyAddBone.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneGetterSetterMode Space;
    
    FRigUnit_HierarchyAddBone();
};

