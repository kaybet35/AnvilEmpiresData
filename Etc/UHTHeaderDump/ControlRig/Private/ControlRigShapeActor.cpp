#include "ControlRigShapeActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AControlRigShapeActor::AControlRigShapeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->ActorRootComponent = (USceneComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->ControlRigIndex = 4294967295;
    this->bSelected = false;
    this->bHovered = false;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void AControlRigShapeActor::SetSelected(bool bInSelected) {
}

void AControlRigShapeActor::SetSelectable(bool bInSelectable) {
}

void AControlRigShapeActor::SetHovered(bool bInHovered) {
}

void AControlRigShapeActor::SetGlobalTransform(const FTransform& InTransform) {
}

void AControlRigShapeActor::SetEnabled(bool bInEnabled) {
}






bool AControlRigShapeActor::IsSelectedInEditor() const {
    return false;
}

bool AControlRigShapeActor::IsHovered() const {
    return false;
}

bool AControlRigShapeActor::IsEnabled() const {
    return false;
}

FTransform AControlRigShapeActor::GetGlobalTransform() const {
    return FTransform{};
}


