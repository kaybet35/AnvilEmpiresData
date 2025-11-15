#pragma once
#include "CoreMinimal.h"
#include "AnimLinkableElement.h"
#include "BranchingPoint.generated.h"

USTRUCT(BlueprintType)
struct FBranchingPoint : public FAnimLinkableElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTimeOffset;
    
    ENGINE_API FBranchingPoint();
};

