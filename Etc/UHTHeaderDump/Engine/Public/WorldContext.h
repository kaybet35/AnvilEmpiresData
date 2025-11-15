#pragma once
#include "CoreMinimal.h"
#include "FullyLoadedPackagesInfo.h"
#include "LevelStreamingStatus.h"
#include "NamedNetDriver.h"
#include "URL.h"
#include "WorldContext.generated.h"

class UGameInstance;
class UGameViewportClient;
class ULevel;
class UObjectReferencer;
class UPendingNetGame;

USTRUCT(BlueprintType)
struct FWorldContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FURL LastURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FURL LastRemoteURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPendingNetGame* PendingNetGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevel*> LoadedLevelsForPendingMapChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObjectReferencer*> ObjectReferencers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameViewportClient* GameViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameInstance* OwningGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNamedNetDriver> ActiveNetDrivers;
    
    ENGINE_API FWorldContext();
};

