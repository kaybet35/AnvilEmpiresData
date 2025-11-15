#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "PerPlatformBool.h"
#include "PerPlatformInt.h"
#include "PerQualityLevelInt.h"
#include "SkeletalMeshLODGroupSettings.h"
#include "SkeletalMeshLODSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Engine)
class USkeletalMeshLODSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FPerQualityLevelInt MinQualityLevelLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MinLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FPerPlatformBool DisableBelowMinLodStripping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bOverrideLODStreamingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FPerPlatformBool bSupportLODStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxNumStreamedLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxNumOptionalLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshLODGroupSettings> LODGroups;
    
public:
    USkeletalMeshLODSettings();

};

