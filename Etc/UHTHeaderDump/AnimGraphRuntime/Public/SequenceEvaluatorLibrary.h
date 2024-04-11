#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "SequenceEvaluatorReference.h"
#include "SequenceEvaluatorLibrary.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class ANIMGRAPHRUNTIME_API USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USequenceEvaluatorLibrary();

    UFUNCTION(BlueprintCallable)
    static FSequenceEvaluatorReference SetSequenceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, UAnimSequenceBase* Sequence, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    static FSequenceEvaluatorReference SetSequence(const FSequenceEvaluatorReference& SequenceEvaluator, UAnimSequenceBase* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static FSequenceEvaluatorReference SetExplicitTime(const FSequenceEvaluatorReference& SequenceEvaluator, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimSequenceBase* GetSequence(const FSequenceEvaluatorReference& SequenceEvaluator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAccumulatedTime(const FSequenceEvaluatorReference& SequenceEvaluator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToSequenceEvaluatorPure(const FAnimNodeReference& Node, FSequenceEvaluatorReference& SequenceEvaluator, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FSequenceEvaluatorReference ConvertToSequenceEvaluator(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FSequenceEvaluatorReference AdvanceTime(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate);
    
};

