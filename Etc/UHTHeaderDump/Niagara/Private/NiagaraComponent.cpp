#include "NiagaraComponent.h"

UNiagaraComponent::UNiagaraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bReceivesDecals = false;
    this->Asset = NULL;
    this->TickBehavior = ENiagaraTickBehavior::UsePrereqs;
    this->RandomSeedOffset = 0;
    this->bForceSolo = false;
    this->bEnableGpuComputeDebug = false;
    this->bAutoDestroy = false;
    this->bRenderingEnabled = true;
    this->bAutoManageAttachment = false;
    this->bAutoAttachWeldSimulatedBodies = false;
    this->MaxTimeBeforeForceUpdateTransform = 5.00f;
    this->AutoAttachLocationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachRotationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachScaleRule = EAttachmentRule::KeepRelative;
    this->bAllowScalability = true;
    this->SimCache = NULL;
    this->CullProxy = NULL;
}

void UNiagaraComponent::SetVariableVec4(FName InVariableName, const FVector4& InValue) {
}

void UNiagaraComponent::SetVariableVec3(FName InVariableName, FVector InValue) {
}

void UNiagaraComponent::SetVariableVec2(FName InVariableName, FVector2D InValue) {
}

void UNiagaraComponent::SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget) {
}

void UNiagaraComponent::SetVariableTexture(FName InVariableName, UTexture* Texture) {
}

void UNiagaraComponent::SetVariableStaticMesh(FName InVariableName, UStaticMesh* InValue) {
}

void UNiagaraComponent::SetVariableQuat(FName InVariableName, const FQuat& InValue) {
}

void UNiagaraComponent::SetVariablePosition(FName InVariableName, FVector InValue) {
}

void UNiagaraComponent::SetVariableObject(FName InVariableName, UObject* Object) {
}

void UNiagaraComponent::SetVariableMatrix(FName InVariableName, const FMatrix& InValue) {
}

void UNiagaraComponent::SetVariableMaterial(FName InVariableName, UMaterialInterface* Object) {
}

void UNiagaraComponent::SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue) {
}

void UNiagaraComponent::SetVariableInt(FName InVariableName, int32 InValue) {
}

void UNiagaraComponent::SetVariableFloat(FName InVariableName, float InValue) {
}

void UNiagaraComponent::SetVariableBool(FName InVariableName, bool InValue) {
}

void UNiagaraComponent::SetVariableActor(FName InVariableName, AActor* Actor) {
}

void UNiagaraComponent::SetTickBehavior(ENiagaraTickBehavior NewTickBehavior) {
}

void UNiagaraComponent::SetSystemFixedBounds(FBox LocalBounds) {
}

void UNiagaraComponent::SetSimCache(UNiagaraSimCache* NewSimCache, bool bResetSystem) {
}

void UNiagaraComponent::SetSeekDelta(float InSeekDelta) {
}

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled) {
}

void UNiagaraComponent::SetRandomSeedOffset(int32 NewRandomSeedOffset) {
}

void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance) {
}

void UNiagaraComponent::SetPaused(bool bInPaused) {
}

void UNiagaraComponent::SetNiagaraVariableVec4(const FString& InVariableName, const FVector4& InValue) {
}

void UNiagaraComponent::SetNiagaraVariableVec3(const FString& InVariableName, FVector InValue) {
}

void UNiagaraComponent::SetNiagaraVariableVec2(const FString& InVariableName, FVector2D InValue) {
}

void UNiagaraComponent::SetNiagaraVariableQuat(const FString& InVariableName, const FQuat& InValue) {
}

void UNiagaraComponent::SetNiagaraVariablePosition(const FString& InVariableName, FVector InValue) {
}

void UNiagaraComponent::SetNiagaraVariableObject(const FString& InVariableName, UObject* Object) {
}

void UNiagaraComponent::SetNiagaraVariableMatrix(const FString& InVariableName, const FMatrix& InValue) {
}

void UNiagaraComponent::SetNiagaraVariableLinearColor(const FString& InVariableName, const FLinearColor& InValue) {
}

void UNiagaraComponent::SetNiagaraVariableInt(const FString& InVariableName, int32 InValue) {
}

void UNiagaraComponent::SetNiagaraVariableFloat(const FString& InVariableName, float InValue) {
}

void UNiagaraComponent::SetNiagaraVariableBool(const FString& InVariableName, bool InValue) {
}

void UNiagaraComponent::SetNiagaraVariableActor(const FString& InVariableName, AActor* Actor) {
}

void UNiagaraComponent::SetMaxSimTime(float InMaxTime) {
}

void UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock) {
}

void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug) {
}

void UNiagaraComponent::SetForceSolo(bool bInForceSolo) {
}

void UNiagaraComponent::SetForceLocalPlayerEffect(bool bIsPlayerEffect) {
}

void UNiagaraComponent::SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds) {
}

void UNiagaraComponent::SetDesiredAge(float InDesiredAge) {
}

void UNiagaraComponent::SetCustomTimeDilation(float Dilation) {
}

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking) {
}

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy) {
}

void UNiagaraComponent::SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters) {
}

void UNiagaraComponent::SetAllowScalability(bool bAllow) {
}

void UNiagaraComponent::SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode) {
}

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge) {
}

void UNiagaraComponent::ResetSystem() {
}

void UNiagaraComponent::ReinitializeSystem() {
}

bool UNiagaraComponent::IsPaused() const {
    return false;
}

void UNiagaraComponent::InitForPerformanceBaseline() {
}

ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior() const {
    return ENiagaraTickBehavior::UsePrereqs;
}

FBox UNiagaraComponent::GetSystemFixedBounds() const {
    return FBox{};
}

UNiagaraSimCache* UNiagaraComponent::GetSimCache() const {
    return NULL;
}

float UNiagaraComponent::GetSeekDelta() const {
    return 0.0f;
}

int32 UNiagaraComponent::GetRandomSeedOffset() const {
    return 0;
}

bool UNiagaraComponent::GetPreviewLODDistanceEnabled() const {
    return false;
}

float UNiagaraComponent::GetPreviewLODDistance() const {
    return 0.0f;
}

TArray<FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const FString& InEmitterName, const FString& InValueName) {
    return TArray<FVector>();
}

TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const FString& InEmitterName, const FString& InValueName) {
    return TArray<float>();
}

TArray<FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const FString& InEmitterName) {
    return TArray<FVector>();
}

float UNiagaraComponent::GetMaxSimTime() const {
    return 0.0f;
}

bool UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta() const {
    return false;
}

bool UNiagaraComponent::GetForceSolo() const {
    return false;
}

bool UNiagaraComponent::GetForceLocalPlayerEffect() const {
    return false;
}

FBox UNiagaraComponent::GetEmitterFixedBounds(FName EmitterName) const {
    return FBox{};
}

float UNiagaraComponent::GetDesiredAge() const {
    return 0.0f;
}

UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const FString& Name) {
    return NULL;
}

float UNiagaraComponent::GetCustomTimeDilation() const {
    return 0.0f;
}

UNiagaraSystem* UNiagaraComponent::GetAsset() const {
    return NULL;
}

bool UNiagaraComponent::GetAllowScalability() const {
    return false;
}

ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode() const {
    return ENiagaraAgeUpdateMode::TickDeltaTime;
}

void UNiagaraComponent::ClearSystemFixedBounds() {
}

void UNiagaraComponent::ClearSimCache(bool bResetSystem) {
}

void UNiagaraComponent::ClearEmitterFixedBounds(FName EmitterName) {
}

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds) {
}

void UNiagaraComponent::AdvanceSimulation(int32 TickCount, float TickDeltaSeconds) {
}


