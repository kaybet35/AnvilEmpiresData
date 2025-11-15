#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldIntegerType -FallbackName=EFieldIntegerType
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldScalarType -FallbackName=EFieldScalarType
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldVectorType -FallbackName=EFieldVectorType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BlueprintFunctionLibrary.h"
#include "PhysicsFieldStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENGINE_API UPhysicsFieldStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhysicsFieldStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector EvalPhysicsVectorField(const UObject* WorldContextObject, const FVector& WorldPosition, const TEnumAsByte<EFieldVectorType> VectorType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float EvalPhysicsScalarField(const UObject* WorldContextObject, const FVector& WorldPosition, const TEnumAsByte<EFieldScalarType> ScalarType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 EvalPhysicsIntegerField(const UObject* WorldContextObject, const FVector& WorldPosition, const TEnumAsByte<EFieldIntegerType> IntegerType);
    
};

