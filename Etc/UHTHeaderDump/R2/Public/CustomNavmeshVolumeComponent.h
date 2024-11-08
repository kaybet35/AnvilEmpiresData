#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "CustomNavmeshVolumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UCustomNavmeshVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UCustomNavmeshVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

