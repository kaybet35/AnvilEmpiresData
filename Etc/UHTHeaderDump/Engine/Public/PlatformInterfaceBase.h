#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DelegateArray.h"
#include "PlatformInterfaceBase.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UPlatformInterfaceBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDelegateArray> AllDelegates;
    
    UPlatformInterfaceBase();

};

