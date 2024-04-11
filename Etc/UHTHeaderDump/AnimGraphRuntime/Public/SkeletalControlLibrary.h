#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "SkeletalControlReference.h"
#include "SkeletalControlLibrary.generated.h"

UCLASS(Blueprintable)
class ANIMGRAPHRUNTIME_API USkeletalControlLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USkeletalControlLibrary();

    UFUNCTION(BlueprintCallable)
    static FSkeletalControlReference SetAlpha(const FSkeletalControlReference& SkeletalControl, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAlpha(const FSkeletalControlReference& SkeletalControl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToSkeletalControlPure(const FAnimNodeReference& Node, FSkeletalControlReference& SkeletalControl, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FSkeletalControlReference ConvertToSkeletalControl(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

