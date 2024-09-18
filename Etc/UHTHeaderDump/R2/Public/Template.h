#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Template.generated.h"

UCLASS(Abstract, Blueprintable)
class R2_API ATemplate : public AActor {
    GENERATED_BODY()
public:
    ATemplate(const FObjectInitializer& ObjectInitializer);

};

