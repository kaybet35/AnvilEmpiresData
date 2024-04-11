#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ControlRigEditorSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class CONTROLRIG_API UControlRigEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UControlRigEditorSettings();

};

