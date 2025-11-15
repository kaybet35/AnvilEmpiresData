#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ActorComponentInstanceData.h"
#include "SceneComponentInstanceData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct ENGINE_API FSceneComponentInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USceneComponent*, FTransform> AttachedInstanceComponents;
    
    FSceneComponentInstanceData();
};

