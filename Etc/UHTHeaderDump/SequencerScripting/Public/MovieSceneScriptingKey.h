#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneScriptingKey.generated.h"

UCLASS(Abstract, Blueprintable)
class UMovieSceneScriptingKey : public UObject {
    GENERATED_BODY()
public:
    UMovieSceneScriptingKey();

};

