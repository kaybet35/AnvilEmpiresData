#include "VisPlayer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundCue -FallbackName=SoundCue
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=AdminEnvDataComponent -FallbackName=AdminEnvDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=ArmorDataComponent -FallbackName=ArmorDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HealthDataComponent -FallbackName=HealthDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HungerDataComponent -FallbackName=HungerDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PlayerInputDataComponent -FallbackName=PlayerInputDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PlayerMountDataComponent -FallbackName=PlayerMountDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PlayerStatusDataComponent -FallbackName=PlayerStatusDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=SimPlayerDataComponent -FallbackName=SimPlayerDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=StaminaDataComponent -FallbackName=StaminaDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=TemperatureDataComponent -FallbackName=TemperatureDataComponent
#include "MapMarkerComponent.h"
#include "VisPlayerVisualsComponent.h"
#include "VisPointLightComponent.h"
#include "VisSpringArmComponent.h"

AVisPlayer::AVisPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->SpringArm = CreateDefaultSubobject<UVisSpringArmComponent>(TEXT("SpringArm"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->SimPlayerDataComponent = CreateDefaultSubobject<USimPlayerDataComponent>(TEXT("SimPlayerDataComponent"));
    this->PlayerMountDataComponent = CreateDefaultSubobject<UPlayerMountDataComponent>(TEXT("PlayerMountDataComponent"));
    this->PlayerInputDataComponent = CreateDefaultSubobject<UPlayerInputDataComponent>(TEXT("PlayerInputDataComponent"));
    this->HealthDataComponent = CreateDefaultSubobject<UHealthDataComponent>(TEXT("HealthDataComponent"));
    this->HungerDataComponent = CreateDefaultSubobject<UHungerDataComponent>(TEXT("HungerDataComponent"));
    this->StaminaDataComponent = CreateDefaultSubobject<UStaminaDataComponent>(TEXT("StaminaDataComponent"));
    this->TemperatureDataComponent = CreateDefaultSubobject<UTemperatureDataComponent>(TEXT("TemperatureDataComponent"));
    this->AdminEnvDataComponent = CreateDefaultSubobject<UAdminEnvDataComponent>(TEXT("AdminEnvDataComponent"));
    this->PlayerStatusDataComponent = CreateDefaultSubobject<UPlayerStatusDataComponent>(TEXT("PlayerStatusDataComponent"));
    this->ItemMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
    this->ItemSecondaryMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemSecondaryMesh"));
    this->UnarmedItemMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UnarmedItemMesh"));
    this->UnarmedItemSecondaryMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UnarmedItemSecondaryMesh"));
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->LandscapeCullVirtualTextureVolumeClass = NULL;
    this->RotationAmount = 1.00f;
    this->CameraRotationLerpSpeed = 1.00f;
    this->AimMeshLength = 100.00f;
    this->YawSpeed = 1.00f;
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
    this->MapMarker = CreateDefaultSubobject<UMapMarkerComponent>(TEXT("MapMarker"));
    this->FamilyMarkerMapMarker = CreateDefaultSubobject<UMapMarkerComponent>(TEXT("FamilyMarkerMapMarker"));
    this->ArmourDataComponent = CreateDefaultSubobject<UArmorDataComponent>(TEXT("ArmourDataComponent"));
    this->VoiceIndicator = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->TorchVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TorchVFXComponent"));
    this->TorchVFX2Component = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TorchVFXUnderworldComponent"));
    this->TorchPointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("TorchPointLightComponent"));
    this->TorchVisPointLightComponent = CreateDefaultSubobject<UVisPointLightComponent>(TEXT("TorchVisPointLightComponent"));
    this->TorchAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("TorchAudioComponent"));
    this->RainVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RainVFXComponent"));
    this->SnowVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SnowVFXComponent"));
    this->BreathFogVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BreathFogVFXComponent"));
    this->RainLowAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("RainLowAudioComponent"));
    this->RainMidAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("RainMidAudioComponent"));
    this->RainHighAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("RainHighAudioComponent"));
    this->SnowLowAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SnowLowAudioComponent"));
    this->SnowMidAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SnowMidAudioComponent"));
    this->SnowHighAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SnowHighAudioComponent"));
    this->WindLowAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("WindLowAudioComponent"));
    this->WindMidAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("WindMidAudioComponent"));
    this->WindHighAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("WindHighAudioComponent"));
    this->UnderworldCollapseFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("UnderworldCollapseFXComponent"));
    this->RepairItemSoundCue = NULL;
    this->EnterSwimmingVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("EnterSwimmingVFXComponent"));
    this->SwimmingLoopVFXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SwimmingLoopVFXComponent"));
    this->EnterSwimmingSoundCue = CreateDefaultSubobject<USoundCue>(TEXT("EnterSwimmingSoundCue"));
    this->SwimmingLoopAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SwimmingLoopAudioComponent"));
    this->NumDynamicShadowCastingLights = 3;
    this->CurrentUsableVisActor = NULL;
    this->CurrentMountableVisActor = NULL;
    this->CurrentUEUsableActor = NULL;
    this->SnowLowAudioComponent->SetupAttachment(SpringArm);
    this->SnowMidAudioComponent->SetupAttachment(SpringArm);
    this->SnowHighAudioComponent->SetupAttachment(SpringArm);
    this->WindLowAudioComponent->SetupAttachment(SpringArm);
    this->WindMidAudioComponent->SetupAttachment(SpringArm);
    this->WindHighAudioComponent->SetupAttachment(SpringArm);
    this->UnderworldCollapseFXComponent->SetupAttachment(SpringArm);
    this->EnterSwimmingVFXComponent->SetupAttachment(Mesh);
    this->SwimmingLoopVFXComponent->SetupAttachment(Mesh);
    this->SwimmingLoopAudioComponent->SetupAttachment(Mesh);
    this->UnarmedItemMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->UnarmedItemSecondaryMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Mesh->SetupAttachment(RootComponent);
    this->Head->SetupAttachment(Mesh);
    this->AimMeshComponent->SetupAttachment(RootComponent);
    this->MeleeAimMeshComponent->SetupAttachment(RootComponent);
    this->MeleeAimMeshTargetComponent->SetupAttachment(RootComponent);
    this->VoiceIndicator->SetupAttachment(RootComponent);
    this->TorchVFXComponent->SetupAttachment(Mesh);
    this->TorchVFX2Component->SetupAttachment(Mesh);
    this->TorchPointLightComponent->SetupAttachment(Mesh);
    this->TorchVisPointLightComponent->SetupAttachment(Mesh);
    this->TorchAudioComponent->SetupAttachment(Mesh);
    this->RainVFXComponent->SetupAttachment(SpringArm);
    this->SnowVFXComponent->SetupAttachment(SpringArm);
    this->BreathFogVFXComponent->SetupAttachment(Mesh);
    this->RainLowAudioComponent->SetupAttachment(SpringArm);
    this->RainMidAudioComponent->SetupAttachment(SpringArm);
    this->RainHighAudioComponent->SetupAttachment(SpringArm);
    this->SpringArm->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Camera->SetupAttachment(SpringArm);
    this->ItemMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ItemSecondaryMeshComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

FString AVisPlayer::GetPlayerName() const {
    return TEXT("");
}

float AVisPlayer::GetNightVisibilityRadius() const {
    return 0.0f;
}

FLinearColor AVisPlayer::GetNightShroudLightSourcePositionAndRadius(const int32 Index) const {
    return FLinearColor{};
}

FVector AVisPlayer::GetCameraVelocity() {
    return FVector{};
}




