#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "VoiceSettings.h"
#include "VOIPTalker.generated.h"

class APlayerState;
class UAudioComponent;
class UVOIPTalker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UVOIPTalker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceSettings Settings;
    
    UVOIPTalker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterWithPlayerState(APlayerState* OwningState);
    
    UFUNCTION(BlueprintCallable)
    float GetVoiceLevel();
    
    UFUNCTION(BlueprintCallable)
    static UVOIPTalker* CreateTalkerForPlayer(APlayerState* OwningState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPOnTalkingEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPOnTalkingBegin(UAudioComponent* AudioComponent);
    
};

