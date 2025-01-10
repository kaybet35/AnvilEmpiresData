#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "VisPointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UVisPointLightComponent(const FObjectInitializer& ObjectInitializer);

};

