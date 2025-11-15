#include "MaterialParameterCollection.h"

UMaterialParameterCollection::UMaterialParameterCollection() {
}

TArray<FName> UMaterialParameterCollection::GetVectorParameterNames() {
    return TArray<FName>();
}

FLinearColor UMaterialParameterCollection::GetVectorParameterDefaultValue(FName ParameterName, bool& bParameterFound) {
    return FLinearColor{};
}

TArray<FName> UMaterialParameterCollection::GetScalarParameterNames() {
    return TArray<FName>();
}

float UMaterialParameterCollection::GetScalarParameterDefaultValue(FName ParameterName, bool& bParameterFound) {
    return 0.0f;
}


