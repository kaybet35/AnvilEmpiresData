#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EAudioBusChannels.h"
#include "AudioBus.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UAudioBus : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioBusChannels AudioBusChannels;
    
    UAudioBus();

};

