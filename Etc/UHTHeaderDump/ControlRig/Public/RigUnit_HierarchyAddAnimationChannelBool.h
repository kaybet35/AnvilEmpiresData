#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddElement.h"
#include "RigUnit_HierarchyAddAnimationChannelBool.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaximumValue;
    
    FRigUnit_HierarchyAddAnimationChannelBool();
};

