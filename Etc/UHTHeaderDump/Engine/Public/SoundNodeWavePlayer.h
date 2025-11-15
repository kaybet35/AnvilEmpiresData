#pragma once
#include "CoreMinimal.h"
#include "SoundNodeAssetReferencer.h"
#include "SoundNodeWavePlayer.generated.h"

class USoundWave;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundWave> SoundWaveAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWave;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLooping: 1;
    
    USoundNodeWavePlayer();

};

