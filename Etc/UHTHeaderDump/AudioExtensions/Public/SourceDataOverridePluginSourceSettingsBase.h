#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SourceDataOverridePluginSourceSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API USourceDataOverridePluginSourceSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USourceDataOverridePluginSourceSettingsBase();

};

