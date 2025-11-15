#pragma once
#include "CoreMinimal.h"
#include "OnUserClickedBannerDelegate.h"
#include "OnUserClosedAdvertisementDelegate.h"
#include "PlatformInterfaceBase.h"
#include "InGameAdManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class UInGameAdManager : public UPlatformInterfaceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPauseWhileAdOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnUserClickedBanner> ClickedBannerDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnUserClosedAdvertisement> ClosedAdDelegates;
    
    UInGameAdManager();

};

