#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "ParticleEditorPromotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FParticleEditorPromotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath DefaultParticleAsset;
    
    ENGINE_API FParticleEditorPromotionSettings();
};

