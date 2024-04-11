#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendClassName -FallbackName=MetasoundFrontendClassName
#include "DefaultMetaSoundAssetAutoUpdateSettings.h"
#include "MetaSoundSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Metasound)
class METASOUNDENGINE_API UMetaSoundSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdateEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendClassName> AutoUpdateDenylist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdateLogWarningOnDroppedConnection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> DirectoriesToRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DenyListCacheChangeID;
    
    UMetaSoundSettings();

};

