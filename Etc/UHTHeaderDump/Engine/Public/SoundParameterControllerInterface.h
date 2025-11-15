#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=AudioParameterControllerInterface -FallbackName=AudioParameterControllerInterface
#include "SoundParameterControllerInterface.generated.h"

UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))
class ENGINE_API USoundParameterControllerInterface : public UAudioParameterControllerInterface {
    GENERATED_BODY()
};

class ENGINE_API ISoundParameterControllerInterface : public IAudioParameterControllerInterface {
    GENERATED_BODY()
public:
};

