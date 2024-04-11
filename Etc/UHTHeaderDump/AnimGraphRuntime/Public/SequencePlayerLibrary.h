#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "SequencePlayerReference.h"
#include "SequencePlayerLibrary.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class ANIMGRAPHRUNTIME_API USequencePlayerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USequencePlayerLibrary();

    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference SetStartPosition(const FSequencePlayerReference& SequencePlayer, float StartPosition);
    
    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference SetSequenceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FSequencePlayerReference& SequencePlayer, UAnimSequenceBase* Sequence, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference SetSequence(const FSequencePlayerReference& SequencePlayer, UAnimSequenceBase* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference SetPlayRate(const FSequencePlayerReference& SequencePlayer, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference SetAccumulatedTime(const FSequencePlayerReference& SequencePlayer, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStartPosition(const FSequencePlayerReference& SequencePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimSequenceBase* GetSequencePure(const FSequencePlayerReference& SequencePlayer);
    
    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference GetSequence(const FSequencePlayerReference& SequencePlayer, UPARAM(Ref) UAnimSequenceBase*& SequenceBase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayRate(const FSequencePlayerReference& SequencePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLoopAnimation(const FSequencePlayerReference& SequencePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAccumulatedTime(const FSequencePlayerReference& SequencePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToSequencePlayerPure(const FAnimNodeReference& Node, FSequencePlayerReference& SequencePlayer, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference ConvertToSequencePlayer(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ComputePlayRateFromDuration(const FSequencePlayerReference& SequencePlayer, float Duration);
    
};

