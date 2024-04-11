#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VisActorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class R2_API AVisActorBase : public AActor {
    GENERATED_BODY()
public:
    AVisActorBase(const FObjectInitializer& ObjectInitializer);

};

