#include "VisPlayer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=ArmorDataComponent -FallbackName=ArmorDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HealthDataComponent -FallbackName=HealthDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HungerDataComponent -FallbackName=HungerDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PlayerInputDataComponent -FallbackName=PlayerInputDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=SimPlayerDataComponent -FallbackName=SimPlayerDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=StaminaDataComponent -FallbackName=StaminaDataComponent
#include "MapMarkerComponent.h"
#include "VisPlayerVisualsComponent.h"
#include "VisSpringArmComponent.h"

AVisPlayer::AVisPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->SpringArm = CreateDefaultSubobject<UVisSpringArmComponent>(TEXT("SpringArm"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->SimPlayerDataComponent = CreateDefaultSubobject<USimPlayerDataComponent>(TEXT("SimPlayerDataComponent"));
    this->PlayerInputDataComponent = CreateDefaultSubobject<UPlayerInputDataComponent>(TEXT("PlayerInputDataComponent"));
    this->HealthDataComponent = CreateDefaultSubobject<UHealthDataComponent>(TEXT("HealthDataComponent"));
    this->HungerDataComponent = CreateDefaultSubobject<UHungerDataComponent>(TEXT("HungerDataComponent"));
    this->StaminaDataComponent = CreateDefaultSubobject<UStaminaDataComponent>(TEXT("StaminaDataComponent"));
    this->ItemMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
    this->ItemSecondaryMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemSecondaryMesh"));
    this->UnarmedItemMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UnarmedItemMesh"));
    this->UnarmedItemSecondaryMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UnarmedItemSecondaryMesh"));
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->RotationAmount = 1.00f;
    this->CameraRotationLerpSpeed = 1.00f;
    this->AimMeshLength = 100.00f;
    this->YawSpeed = 1.00f;
    this->MapMarker = CreateDefaultSubobject<UMapMarkerComponent>(TEXT("MapMarker"));
    this->MinShroudRadius = 750.00f;
    this->MaxShroudRadius = 3000.00f;
    this->DeathCue = NULL;
    this->Capsule = (UCapsuleComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->AimMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AimMesh"));
    this->AimMeshMaterial = NULL;
    this->MeleeAimMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeleeAimMesh"));
    this->MeleeAimMeshTargetComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeleeAimMeshTarget"));
    this->FishingAimMeshClass = NULL;
    this->FishingBobberClass = NULL;
    this->PlayerVisualsComponent = CreateDefaultSubobject<UVisPlayerVisualsComponent>(TEXT("PlayerVisualsComponent"));
    this->ArmourDataComponent = CreateDefaultSubobject<UArmorDataComponent>(TEXT("ArmourDataComponent"));
    this->VoiceIndicator = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->TorchVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TorchVFXComponent"));
    this->TorchAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("TorchAudioComponent"));
    this->CurrentUsableVisActor = NULL;
    this->CurrentMountableVisActor = NULL;
    this->UnarmedItemMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->UnarmedItemSecondaryMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Mesh->SetupAttachment(RootComponent);
    this->Head->SetupAttachment(Mesh);
    this->AimMeshComponent->SetupAttachment(RootComponent);
    this->MeleeAimMeshComponent->SetupAttachment(RootComponent);
    this->MeleeAimMeshTargetComponent->SetupAttachment(RootComponent);
    this->VoiceIndicator->SetupAttachment(RootComponent);
    this->TorchVFXComponent->SetupAttachment(Mesh);
    this->TorchAudioComponent->SetupAttachment(Mesh);
    this->SpringArm->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ItemMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ItemSecondaryMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

float AVisPlayer::GetVelocityHeadingDegrees() {
    return 0.0f;
}

FString AVisPlayer::GetPlayerName() const {
    return TEXT("");
}

float AVisPlayer::GetNightVisibilityRadius(float NightTimeNormalized) const {
    return 0.0f;
}

FLinearColor AVisPlayer::GetNightShroudLightSourcePositionAndRadius(const int32 Index) const {
    return FLinearColor{};
}

FVector AVisPlayer::GetCameraVelocity() {
    return FVector{};
}



FVector AVisPlayer::AnimGetVelocity() {
    return FVector{};
}


