#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "GeometryCollectionISMPoolComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionISMPoolComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UGeometryCollectionISMPoolComponent(const FObjectInitializer& ObjectInitializer);

};

