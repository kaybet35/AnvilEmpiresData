#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimComponentSpacePoseContext -FallbackName=AnimComponentSpacePoseContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimExecutionContext -FallbackName=AnimExecutionContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInitializationContext -FallbackName=AnimInitializationContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimPoseContext -FallbackName=AnimPoseContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimExecutionContextConversionResult -FallbackName=EAnimExecutionContextConversionResult
#include "AnimExecutionContextLibrary.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class ANIMGRAPHRUNTIME_API UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimExecutionContextLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDeltaTime(const FAnimUpdateContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentWeight(const FAnimUpdateContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAnimNodeReference GetAnimNodeReference(UAnimInstance* Instance, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimInstance* GetAnimInstance(const FAnimExecutionContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FAnimUpdateContext ConvertToUpdateContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FAnimPoseContext ConvertToPoseContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FAnimInitializationContext ConvertToInitializationContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    
};

