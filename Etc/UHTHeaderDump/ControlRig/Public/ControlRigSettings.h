#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ControlRigSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class CONTROLRIG_API UControlRigSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UControlRigSettings();

};

