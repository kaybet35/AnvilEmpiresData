#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddElement.h"
#include "RigUnit_HierarchyAddAnimationChannelInteger.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumValue;
    
    FRigUnit_HierarchyAddAnimationChannelInteger();
};

