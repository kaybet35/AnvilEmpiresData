#pragma once
#include "CoreMinimal.h"
#include "EAspectRatioAxisConstraint.h"
#include "Player.h"
#include "Templates/SubclassOf.h"
#include "LocalPlayer.generated.h"

class APlayerController;
class UGameViewportClient;

UCLASS(Blueprintable, NonTransient, Config=Engine, Within=Engine)
class ENGINE_API ULocalPlayer : public UPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameViewportClient* ViewportClient;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerController> PendingLevelPlayerControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSentSplitJoin: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
public:
    ULocalPlayer();

};

