#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Blueprint -FallbackName=Blueprint
#include "UserWidgetBlueprint.generated.h"

UCLASS(Abstract, Blueprintable)
class UMG_API UUserWidgetBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UUserWidgetBlueprint();

};

