#pragma once
#include "CoreMinimal.h"
#include "CRSimContainer.h"
#include "CRSimLinearSpring.h"
#include "CRSimPoint.h"
#include "CRSimPointConstraint.h"
#include "CRSimPointForce.h"
#include "CRSimSoftCollision.h"
#include "CRSimPointContainer.generated.h"

USTRUCT(BlueprintType)
struct FCRSimPointContainer : public FCRSimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimLinearSpring> Springs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimPointForce> Forces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimSoftCollision> CollisionVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimPointConstraint> Constraints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimPoint> PreviousStep;
    
public:
    CONTROLRIG_API FCRSimPointContainer();
};

