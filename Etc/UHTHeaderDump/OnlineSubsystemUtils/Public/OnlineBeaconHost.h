#pragma once
#include "CoreMinimal.h"
#include "OnlineBeacon.h"
#include "OnlineBeaconHost.generated.h"

class AOnlineBeaconClient;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconHost : public AOnlineBeacon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListenPort;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAuthRequired;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxAuthTokenSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOnlineBeaconClient*> ClientActors;
    
public:
    AOnlineBeaconHost(const FObjectInitializer& ObjectInitializer);

};

