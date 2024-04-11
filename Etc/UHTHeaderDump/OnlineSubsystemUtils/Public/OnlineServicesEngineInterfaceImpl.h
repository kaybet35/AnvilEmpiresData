#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineEngineInterface -FallbackName=OnlineEngineInterface
#include "OnlineServicesEngineInterfaceImpl.generated.h"

UCLASS(Blueprintable)
class ONLINESUBSYSTEMUTILS_API UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface {
    GENERATED_BODY()
public:
    UOnlineServicesEngineInterfaceImpl();

};

