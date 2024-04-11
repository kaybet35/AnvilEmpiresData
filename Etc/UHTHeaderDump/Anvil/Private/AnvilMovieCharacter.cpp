#include "AnvilMovieCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=SimPlayerDataComponent -FallbackName=SimPlayerDataComponent
#include "VisPlayerVisualsComponent.h"

AAnvilMovieCharacter::AAnvilMovieCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->SimPlayerDataComponent = CreateDefaultSubobject<USimPlayerDataComponent>(TEXT("SimPlayerDataComponent"));
    this->ItemMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->ItemSecondaryMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemSecondaryMesh"));
    this->UnarmedItemMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UnarmedItemMesh"));
    this->UnarmedItemSecondaryMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UnarmedItemSecondaryMesh"));
    this->VehicleInputState = EAnvilVehicleInputState::Idle;
    this->Capsule = (UCapsuleComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->PlayerVisualsComponent = CreateDefaultSubobject<UVisPlayerVisualsComponent>(TEXT("PlayerVisualsComponent"));
    this->TorchVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TorchVFXComponent"));
    this->TorchVFXComponent->SetupAttachment(Mesh);
    this->ItemMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ItemSecondaryMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->UnarmedItemMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->UnarmedItemSecondaryMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Mesh->SetupAttachment(RootComponent);
    this->Head->SetupAttachment(Mesh);
}


