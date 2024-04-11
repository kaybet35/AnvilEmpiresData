#include "MediaPlateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaPlaylist -FallbackName=MediaPlaylist

UMediaPlateComponent::UMediaPlateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayOnOpen = true;
    this->bAutoPlay = true;
    this->bEnableAudio = false;
    this->StartTime = 0.00f;
    this->bIsAspectRatioAuto = true;
    this->SoundComponent = NULL;
    this->StaticMeshComponent = NULL;
    this->MediaPlaylist = CreateDefaultSubobject<UMediaPlaylist>(TEXT("MediaPlaylist0"));
    this->PlaylistIndex = 0;
    this->bIsMediaPlatePlaying = false;
    this->bPlayOnlyWhenVisible = false;
    this->bLoop = true;
    this->VisibleMipsTilesCalculations = EMediaTextureVisibleMipsTiles::Plane;
    this->MipMapBias = 0.00f;
    this->LetterboxAspectRatio = 0.00f;
    this->MediaTexture = NULL;
    this->MediaPlayer = NULL;
}

void UMediaPlateComponent::SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible) {
}

void UMediaPlateComponent::SetMeshRange(FVector2D InMeshRange) {
}

void UMediaPlateComponent::SetLoop(bool bInLoop) {
}

void UMediaPlateComponent::SetLetterboxAspectRatio(float AspectRatio) {
}

bool UMediaPlateComponent::Seek(const FTimespan& Time) {
    return false;
}

bool UMediaPlateComponent::Rewind() {
    return false;
}

void UMediaPlateComponent::Play() {
}

void UMediaPlateComponent::Pause() {
}

void UMediaPlateComponent::Open() {
}

void UMediaPlateComponent::OnMediaOpened(const FString& DeviceUrl) {
}

void UMediaPlateComponent::OnMediaEnd() {
}

bool UMediaPlateComponent::IsMediaPlatePlaying() const {
    return false;
}

FVector2D UMediaPlateComponent::GetMeshRange() const {
    return FVector2D{};
}

UMediaTexture* UMediaPlateComponent::GetMediaTexture() {
    return NULL;
}

UMediaPlayer* UMediaPlateComponent::GetMediaPlayer() {
    return NULL;
}

bool UMediaPlateComponent::GetLoop() {
    return false;
}

float UMediaPlateComponent::GetLetterboxAspectRatio() {
    return 0.0f;
}

void UMediaPlateComponent::Close() {
}


