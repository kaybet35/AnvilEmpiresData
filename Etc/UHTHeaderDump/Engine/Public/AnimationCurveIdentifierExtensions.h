#pragma once
#include "CoreMinimal.h"
#include "AnimationCurveIdentifier.h"
#include "BlueprintFunctionLibrary.h"
#include "ERawCurveTrackTypes.h"
#include "AnimationCurveIdentifierExtensions.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UAnimationCurveIdentifierExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationCurveIdentifierExtensions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(UPARAM(Ref) FAnimationCurveIdentifier& Identifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERawCurveTrackTypes GetType(UPARAM(Ref) FAnimationCurveIdentifier& Identifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetName(UPARAM(Ref) FAnimationCurveIdentifier& Identifier);
    
};

