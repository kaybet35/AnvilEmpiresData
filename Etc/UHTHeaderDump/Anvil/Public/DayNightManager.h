#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DayNightManager.generated.h"

UCLASS(Blueprintable)
class ANVIL_API ADayNightManager : public AActor {
    GENERATED_BODY()
public:
    ADayNightManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 GetDayCurrentSeconds();
    
};

