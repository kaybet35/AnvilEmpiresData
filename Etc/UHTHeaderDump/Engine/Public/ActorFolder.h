#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActorFolder.generated.h"

UCLASS(Blueprintable, Within=Level)
class ENGINE_API UActorFolder : public UObject {
    GENERATED_BODY()
public:
    UActorFolder();

};

