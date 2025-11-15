#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "EEvaluatorDataSource.h"
#include "EEvaluatorMode.h"
#include "AnimNode_TransitionPoseEvaluator.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FramesToCachePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEvaluatorDataSource::Type> DataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEvaluatorMode::Type> EvaluatorMode;
    
    FAnimNode_TransitionPoseEvaluator();
};

