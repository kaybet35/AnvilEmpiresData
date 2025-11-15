#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InstancedPlacemenClientSettings.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UInstancedPlacemenClientSettings : public UObject {
    GENERATED_BODY()
public:
    UInstancedPlacemenClientSettings();

};

