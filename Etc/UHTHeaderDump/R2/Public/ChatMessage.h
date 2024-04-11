#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ChatMessage.generated.h"

UCLASS(Blueprintable)
class R2_API UChatMessage : public UObject {
    GENERATED_BODY()
public:
    UChatMessage();

};

