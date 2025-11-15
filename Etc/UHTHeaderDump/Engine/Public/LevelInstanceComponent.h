#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "LevelInstanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API ULevelInstanceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    ULevelInstanceComponent(const FObjectInitializer& ObjectInitializer);

};

