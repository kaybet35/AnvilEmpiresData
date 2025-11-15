#pragma once
#include "CoreMinimal.h"
#include "AlphaBlendArgs.h"
#include "EMontageBlendMode.h"
#include "MontageBlendSettings.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct ENGINE_API FMontageBlendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* BlendProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs Blend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMontageBlendMode BlendMode;
    
    FMontageBlendSettings();
};

