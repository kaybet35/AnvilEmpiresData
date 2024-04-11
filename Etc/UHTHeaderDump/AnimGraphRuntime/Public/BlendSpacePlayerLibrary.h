#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "BlendSpacePlayerReference.h"
#include "BlendSpacePlayerLibrary.generated.h"

class UBlendSpace;

UCLASS(Blueprintable)
class ANIMGRAPHRUNTIME_API UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlendSpacePlayerLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldResetPlayTimeWhenBlendSpaceChanges(const FBlendSpacePlayerReference& BlendSpacePlayer);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(const FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference SetPlayRate(const FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference SetLoop(const FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FBlendSpacePlayerReference& BlendSpacePlayer, UBlendSpace* BlendSpace, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference SetBlendSpace(const FBlendSpacePlayerReference& BlendSpacePlayer, UBlendSpace* BlendSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStartPosition(const FBlendSpacePlayerReference& BlendSpacePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPosition(const FBlendSpacePlayerReference& BlendSpacePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayRate(const FBlendSpacePlayerReference& BlendSpacePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLoop(const FBlendSpacePlayerReference& BlendSpacePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBlendSpace* GetBlendSpace(const FBlendSpacePlayerReference& BlendSpacePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToBlendSpacePlayerPure(const FAnimNodeReference& Node, FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference ConvertToBlendSpacePlayer(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

