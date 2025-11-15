#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
#include "ETimecodeProviderSynchronizationState.h"
#include "TimecodeProvider.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UTimecodeProvider : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameDelay;
    
    UTimecodeProvider();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimecode GetTimecode() const;
    
    UFUNCTION(BlueprintPure)
    ETimecodeProviderSynchronizationState GetSynchronizationState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQualifiedFrameTime GetQualifiedFrameTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameRate GetFrameRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimecode GetDelayedTimecode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQualifiedFrameTime GetDelayedQualifiedFrameTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool FetchTimecode(FQualifiedFrameTime& OutFrameTime);
    
    UFUNCTION(BlueprintCallable)
    void FetchAndUpdate();
    
};

