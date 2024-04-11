#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=NodeHierarchyWithUserData -FallbackName=NodeHierarchyWithUserData
#include "ConstraintNodeData.h"
#include "AnimationHierarchy.generated.h"

USTRUCT(BlueprintType)
struct FAnimationHierarchy : public FNodeHierarchyWithUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstraintNodeData> UserData;
    
    CONTROLRIG_API FAnimationHierarchy();
};

