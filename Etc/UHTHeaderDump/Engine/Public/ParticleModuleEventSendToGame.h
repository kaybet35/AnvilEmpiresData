#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ParticleModuleEventSendToGame.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleEventSendToGame : public UObject {
    GENERATED_BODY()
public:
    UParticleModuleEventSendToGame();

};

