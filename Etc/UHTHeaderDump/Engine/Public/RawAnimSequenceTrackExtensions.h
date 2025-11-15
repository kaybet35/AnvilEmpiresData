#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BlueprintFunctionLibrary.h"
#include "RawAnimSequenceTrack.h"
#include "RawAnimSequenceTrackExtensions.generated.h"

UCLASS(Blueprintable)
class ENGINE_API URawAnimSequenceTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URawAnimSequenceTrackExtensions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetScaleKeys(const FRawAnimSequenceTrack& Track);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FQuat> GetRotationalKeys(const FRawAnimSequenceTrack& Track);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetPositionalKeys(const FRawAnimSequenceTrack& Track);
    
};

