#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "CustomHeightmapComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UCustomHeightmapComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UCustomHeightmapComponent(const FObjectInitializer& ObjectInitializer);

};

