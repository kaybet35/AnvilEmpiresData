#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AnvilPrefab.generated.h"

UCLASS(Blueprintable)
class R2_API AAnvilPrefab : public AActor {
    GENERATED_BODY()
public:
    AAnvilPrefab(const FObjectInitializer& ObjectInitializer);

};

