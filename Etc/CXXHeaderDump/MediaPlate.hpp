#ifndef UE4SS_SDK_MediaPlate_HPP
#define UE4SS_SDK_MediaPlate_HPP

class AMediaPlate : public AActor
{
    class UMediaPlateComponent* MediaPlateComponent;                                  // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UMediaPlateAssetUserData : public UAssetUserData
{
}; // Size: 0x38

class UMediaPlateComponent : public UActorComponent
{
    bool bPlayOnOpen;                                                                 // 0x00A8 (size: 0x1)
    bool bAutoPlay;                                                                   // 0x00A9 (size: 0x1)
    bool bEnableAudio;                                                                // 0x00AA (size: 0x1)
    float StartTime;                                                                  // 0x00AC (size: 0x4)
    bool bIsAspectRatioAuto;                                                          // 0x00B0 (size: 0x1)
    class UMediaSoundComponent* SoundComponent;                                       // 0x00B8 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x00C0 (size: 0x8)
    TArray<class UStaticMeshComponent*> Letterboxes;                                  // 0x00C8 (size: 0x10)
    class UMediaPlaylist* MediaPlaylist;                                              // 0x00D8 (size: 0x8)
    int32 PlaylistIndex;                                                              // 0x00E0 (size: 0x4)
    FMediaSourceCacheSettings CacheSettings;                                          // 0x00E4 (size: 0x8)
    bool bIsMediaPlatePlaying;                                                        // 0x00EC (size: 0x1)
    bool bPlayOnlyWhenVisible;                                                        // 0x00F4 (size: 0x1)
    bool bLoop;                                                                       // 0x00F5 (size: 0x1)
    EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations;                       // 0x00F6 (size: 0x1)
    float MipMapBias;                                                                 // 0x00F8 (size: 0x4)
    float LetterboxAspectRatio;                                                       // 0x00FC (size: 0x4)
    FVector2D MeshRange;                                                              // 0x0100 (size: 0x10)
    class UMediaTexture* MediaTexture;                                                // 0x0110 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0118 (size: 0x8)

    void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);
    void SetMeshRange(FVector2D InMeshRange);
    void SetLoop(bool bInLoop);
    void SetLetterboxAspectRatio(float AspectRatio);
    bool Seek(const FTimespan& Time);
    bool Rewind();
    void Play();
    void Pause();
    void Open();
    void OnMediaOpened(FString DeviceUrl);
    void OnMediaEnd();
    bool IsMediaPlatePlaying();
    FVector2D GetMeshRange();
    class UMediaTexture* GetMediaTexture();
    class UMediaPlayer* GetMediaPlayer();
    bool GetLoop();
    float GetLetterboxAspectRatio();
    void Close();
}; // Size: 0x148

#endif
