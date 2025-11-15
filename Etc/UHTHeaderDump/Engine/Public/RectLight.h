#pragma once
#include "CoreMinimal.h"
#include "Light.h"
#include "RectLight.generated.h"

class URectLightComponent;

UCLASS(Blueprintable, MinimalAPI)
class ARectLight : public ALight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URectLightComponent* RectLightComponent;
    
    ARectLight(const FObjectInitializer& ObjectInitializer);

};

