#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "Actor.h"
#include "LevelScriptActor.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ENGINE_API ALevelScriptActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInputEnabled: 1;
    
public:
    ALevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    
    UFUNCTION(BlueprintCallable)
    bool RemoteEvent(FName EventName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void LevelReset();
    
};

