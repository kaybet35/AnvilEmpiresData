#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "LayeredBoneBlendReference.h"
#include "LayeredBoneBlendLibrary.generated.h"

UCLASS(Blueprintable)
class ANIMGRAPHRUNTIME_API ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULayeredBoneBlendLibrary();

    UFUNCTION(BlueprintCallable)
    static FLayeredBoneBlendReference SetBlendMask(const FAnimUpdateContext& UpdateContext, const FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, FName BlendMaskName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumPoses(const FLayeredBoneBlendReference& LayeredBoneBlend);
    
    UFUNCTION(BlueprintCallable)
    static FLayeredBoneBlendReference ConvertToLayeredBoneBlend(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToLayeredBlendPerBonePure(const FAnimNodeReference& Node, FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result);
    
};

