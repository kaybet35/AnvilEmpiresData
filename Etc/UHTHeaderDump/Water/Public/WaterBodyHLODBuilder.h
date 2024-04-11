#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HLODBuilder -FallbackName=HLODBuilder
#include "WaterBodyHLODBuilder.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UWaterBodyHLODBuilder : public UHLODBuilder {
    GENERATED_BODY()
public:
    UWaterBodyHLODBuilder();

};

