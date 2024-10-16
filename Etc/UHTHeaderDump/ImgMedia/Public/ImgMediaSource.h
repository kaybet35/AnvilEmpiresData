#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=BaseMediaSource -FallbackName=BaseMediaSource
#include "ImgMediaSource.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class IMGMEDIA_API UImgMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPathRelativeToProjectRoot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRateOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProxyOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillGapsInSequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath SequencePath;
    
public:
    UImgMediaSource();

    UFUNCTION(BlueprintCallable)
    void SetTokenizedSequencePath(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    void SetSequencePath(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    void SetMipLevelDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetObject(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGlobalCamera(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSequencePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProxies(TArray<FString>& OutProxies) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTargetObject(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalCamera(AActor* InActor);
    
};

