#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=DynamicPrefab -FallbackName=DynamicPrefab
#include "UnderworldModuleDynamicPrefab.generated.h"

UCLASS(Abstract, Blueprintable)
class ANVIL_API AUnderworldModuleDynamicPrefab : public ADynamicPrefab {
    GENERATED_BODY()
public:
    AUnderworldModuleDynamicPrefab(const FObjectInitializer& ObjectInitializer);

};

