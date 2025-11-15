#pragma once
#include "CoreMinimal.h"
#include "PlatformInterfaceBase.h"
#include "CloudStorageBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCloudStorageBase : public UPlatformInterfaceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LocalCloudFiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuppressDelegateCalls: 1;
    
    UCloudStorageBase();

};

