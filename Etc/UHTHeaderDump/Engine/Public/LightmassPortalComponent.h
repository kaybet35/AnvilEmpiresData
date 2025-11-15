#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "LightmassPortalComponent.generated.h"

class UBoxComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULightmassPortalComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PreviewBox;
    
    ULightmassPortalComponent(const FObjectInitializer& ObjectInitializer);

};

