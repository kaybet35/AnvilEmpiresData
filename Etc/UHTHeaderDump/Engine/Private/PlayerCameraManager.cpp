#include "PlayerCameraManager.h"
#include "SceneComponent.h"
#include "Templates/SubclassOf.h"

APlayerCameraManager::APlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent0"));
    this->PCOwner = NULL;
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->DefaultFOV = 90.00f;
    this->DefaultOrthoWidth = 512.00f;
    this->DefaultAspectRatio = 1.33f;
    this->DefaultModifiers.AddDefaulted(1);
    this->FreeCamDistance = 256.00f;
    this->CachedCameraShakeMod = NULL;
    this->AnimCameraActor = NULL;
    this->bIsOrthographic = false;
    this->bDefaultConstrainAspectRatio = false;
    this->bClientSimulatingViewTarget = false;
    this->bUseClientSideCameraUpdates = true;
    this->bGameCameraCutThisFrame = false;
    this->ViewPitchMin = -89.90f;
    this->ViewPitchMax = 89.90f;
    this->ViewYawMin = 0.00f;
    this->ViewYawMax = 360.00f;
    this->ViewRollMin = -89.90f;
    this->ViewRollMax = 89.90f;
    this->ServerUpdateCameraTimeout = 2.00f;
}

void APlayerCameraManager::SwapPendingViewTargetWhenUsingClientSideCameraUpdates() {
}

void APlayerCameraManager::StopCameraShake(UCameraShakeBase* ShakeInstance, bool bImmediately) {
}

void APlayerCameraManager::StopCameraFade() {
}

void APlayerCameraManager::StopAllInstancesOfCameraShakeFromSource(TSubclassOf<UCameraShakeBase> Shake, UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
}

void APlayerCameraManager::StopAllInstancesOfCameraShake(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately) {
}

void APlayerCameraManager::StopAllCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
}

void APlayerCameraManager::StopAllCameraShakes(bool bImmediately) {
}

UCameraShakeBase* APlayerCameraManager::StartCameraShakeFromSource(TSubclassOf<UCameraShakeBase> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

UCameraShakeBase* APlayerCameraManager::StartCameraShake(TSubclassOf<UCameraShakeBase> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

void APlayerCameraManager::StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
}

void APlayerCameraManager::SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio) {
}

void APlayerCameraManager::SetGameCameraCutThisFrame() {
}

void APlayerCameraManager::RemoveGenericCameraLensEffect(TScriptInterface<ICameraLensEffectInterface> Emitter) {
}

bool APlayerCameraManager::RemoveCameraModifier(UCameraModifier* ModifierToRemove) {
    return false;
}

void APlayerCameraManager::RemoveCameraLensEffect(AEmitterCameraLensEffectBase* Emitter) {
}

void APlayerCameraManager::PhotographyCameraModify_Implementation(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation) {
}

void APlayerCameraManager::OnPhotographySessionStart_Implementation() {
}

void APlayerCameraManager::OnPhotographySessionEnd_Implementation() {
}

void APlayerCameraManager::OnPhotographyMultiPartCaptureStart_Implementation() {
}

void APlayerCameraManager::OnPhotographyMultiPartCaptureEnd_Implementation() {
}

APlayerController* APlayerCameraManager::GetOwningPlayerController() const {
    return NULL;
}

float APlayerCameraManager::GetFOVAngle() const {
    return 0.0f;
}

FRotator APlayerCameraManager::GetCameraRotation() const {
    return FRotator{};
}

FVector APlayerCameraManager::GetCameraLocation() const {
    return FVector{};
}

UCameraModifier* APlayerCameraManager::FindCameraModifierByClass(TSubclassOf<UCameraModifier> ModifierClass) {
    return NULL;
}

void APlayerCameraManager::ClearCameraLensEffects() {
}


UCameraModifier* APlayerCameraManager::AddNewCameraModifier(TSubclassOf<UCameraModifier> ModifierClass) {
    return NULL;
}

TScriptInterface<ICameraLensEffectInterface> APlayerCameraManager::AddGenericCameraLensEffect(TSubclassOf<AActor> LensEffectEmitterClass) {
    return NULL;
}

AEmitterCameraLensEffectBase* APlayerCameraManager::AddCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass) {
    return NULL;
}


