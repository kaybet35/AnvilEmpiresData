#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=EMediaTextureVisibleMipsTiles -FallbackName=EMediaTextureVisibleMipsTiles
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaPlayerProxyInterface -FallbackName=MediaPlayerProxyInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaSourceCacheSettings -FallbackName=MediaSourceCacheSettings
#include "MediaPlateComponent.generated.h"

class UMediaPlayer;
class UMediaPlaylist;
class UMediaSoundComponent;
class UMediaTexture;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MEDIAPLATE_API UMediaPlateComponent : public UActorComponent, public IMediaPlayerProxyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAspectRatioAuto;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Letterboxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* MediaPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaylistIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaSourceCacheSettings CacheSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMediaPlatePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnlyWhenVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MipMapBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LetterboxAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MeshRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
public:
    UMediaPlateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshRange(FVector2D InMeshRange);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool bInLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetLetterboxAspectRatio(float AspectRatio);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(const FTimespan& Time);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMediaOpened(const FString& DeviceUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnMediaEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMediaPlatePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMeshRange() const;
    
    UFUNCTION(BlueprintCallable)
    UMediaTexture* GetMediaTexture();
    
    UFUNCTION(BlueprintCallable)
    UMediaPlayer* GetMediaPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoop();
    
    UFUNCTION(BlueprintCallable)
    float GetLetterboxAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    

    // Fix for true pure virtual functions not being implemented
};

