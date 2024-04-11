#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_HierarchyAddElement.h"
#include "RigUnit_HierarchyAddAnimationChannelVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaximumValue;
    
    FRigUnit_HierarchyAddAnimationChannelVector();
};

