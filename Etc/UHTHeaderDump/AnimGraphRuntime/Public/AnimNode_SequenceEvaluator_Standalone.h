#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimGroupRole -FallbackName=EAnimGroupRole
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimSyncMethod -FallbackName=EAnimSyncMethod
#include "AnimNode_SequenceEvaluatorBase.h"
#include "ESequenceEvalReinit.h"
#include "AnimNode_SequenceEvaluator_Standalone.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimSyncMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreForRelevancyTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplicitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportToExplicitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESequenceEvalReinit::Type> ReinitializationBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPosition;
    
public:
    FAnimNode_SequenceEvaluator_Standalone();
};

