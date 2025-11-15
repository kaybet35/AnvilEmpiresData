#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BlueprintFunctionLibrary.h"
#include "EImportanceWeight.h"
#include "ImportanceTexture.h"
#include "ImportanceSamplingLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UImportanceSamplingLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandomSobolFloat(int32 Index, int32 Dimension, float Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomSobolCell3D(int32 Index, int32 NumCells, FVector Cell, FVector Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D RandomSobolCell2D(int32 Index, int32 NumCells, FVector2D Cell, FVector2D Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float NextSobolFloat(int32 Index, int32 Dimension, float PreviousValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector NextSobolCell3D(int32 Index, int32 NumCells, FVector PreviousValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D NextSobolCell2D(int32 Index, int32 NumCells, FVector2D PreviousValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FImportanceTexture MakeImportanceTexture(UTexture2D* Texture, TEnumAsByte<EImportanceWeight::Type> WeightingFunc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ImportanceSample(const FImportanceTexture& Texture, const FVector2D& Rand, int32 Samples, float Intensity, FVector2D& SamplePosition, FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakImportanceTexture(const FImportanceTexture& ImportanceTexture, UTexture2D*& Texture, TEnumAsByte<EImportanceWeight::Type>& WeightingFunc);
    
};

