#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioLinkSettingsAbstract.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOLINKCORE_API UAudioLinkSettingsAbstract : public UObject {
    GENERATED_BODY()
public:
    UAudioLinkSettingsAbstract();

};

