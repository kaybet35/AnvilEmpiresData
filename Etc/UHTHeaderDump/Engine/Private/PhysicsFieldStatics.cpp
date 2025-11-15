#include "PhysicsFieldStatics.h"

UPhysicsFieldStatics::UPhysicsFieldStatics() {
}

FVector UPhysicsFieldStatics::EvalPhysicsVectorField(const UObject* WorldContextObject, const FVector& WorldPosition, const TEnumAsByte<EFieldVectorType> VectorType) {
    return FVector{};
}

float UPhysicsFieldStatics::EvalPhysicsScalarField(const UObject* WorldContextObject, const FVector& WorldPosition, const TEnumAsByte<EFieldScalarType> ScalarType) {
    return 0.0f;
}

int32 UPhysicsFieldStatics::EvalPhysicsIntegerField(const UObject* WorldContextObject, const FVector& WorldPosition, const TEnumAsByte<EFieldIntegerType> IntegerType) {
    return 0;
}


