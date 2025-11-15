#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "RendererOverrideSettings.generated.h"

UCLASS(Blueprintable, ProjectUserConfig, Config=Engine)
class ENGINE_API URendererOverrideSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportAllShaderPermutations: 1;
    
    URendererOverrideSettings();

};

