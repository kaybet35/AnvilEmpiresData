#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AudioLinkBlueprintInterface.generated.h"

class USoundBase;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class AUDIOLINKENGINE_API UAudioLinkBlueprintInterface : public UInterface {
    GENERATED_BODY()
};

class AUDIOLINKENGINE_API IAudioLinkBlueprintInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void StopLink() PURE_VIRTUAL(StopLink,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetLinkSound(USoundBase* NewSound) PURE_VIRTUAL(SetLinkSound,);
    
    UFUNCTION(BlueprintCallable)
    virtual void PlayLink(float StartTime) PURE_VIRTUAL(PlayLink,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsLinkPlaying() const PURE_VIRTUAL(IsLinkPlaying, return false;);
    
};

