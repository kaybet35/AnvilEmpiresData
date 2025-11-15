#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SourceEffectChainEntry.h"
#include "SoundEffectSourcePresetChain.generated.h"

UCLASS(Blueprintable)
class ENGINE_API USoundEffectSourcePresetChain : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSourceEffectChainEntry> Chain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayEffectChainTails: 1;
    
    USoundEffectSourcePresetChain();

};

