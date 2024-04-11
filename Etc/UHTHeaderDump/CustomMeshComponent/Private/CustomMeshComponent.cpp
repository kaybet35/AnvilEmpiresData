#include "CustomMeshComponent.h"

UCustomMeshComponent::UCustomMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UCustomMeshComponent::SetCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles) {
    return false;
}

void UCustomMeshComponent::ClearCustomMeshTriangles() {
}

void UCustomMeshComponent::AddCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles) {
}


