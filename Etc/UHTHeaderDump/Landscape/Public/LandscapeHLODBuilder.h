#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HLODBuilder -FallbackName=HLODBuilder
#include "LandscapeHLODBuilder.generated.h"

UCLASS(Blueprintable, HideDropdown)
class LANDSCAPE_API ULandscapeHLODBuilder : public UHLODBuilder {
    GENERATED_BODY()
public:
    ULandscapeHLODBuilder();

};

