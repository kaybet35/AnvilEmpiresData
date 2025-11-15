#pragma once
#include "CoreMinimal.h"
#include "VoiceSettings.generated.h"

class USceneComponent;
class USoundAttenuation;
class USoundEffectSourcePresetChain;

USTRUCT(BlueprintType)
struct FVoiceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ComponentToAttachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* SourceEffectChain;
    
    ENGINE_API FVoiceSettings();
};

