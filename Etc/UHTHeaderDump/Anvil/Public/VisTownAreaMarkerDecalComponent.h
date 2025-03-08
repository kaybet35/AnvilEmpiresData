#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
#include "VisTownAreaMarkerDecalComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisTownAreaMarkerDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
    UVisTownAreaMarkerDecalComponent(const FObjectInitializer& ObjectInitializer);

};

