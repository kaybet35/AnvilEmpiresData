#pragma once
#include "CoreMinimal.h"
#include "SceneCapture.h"
#include "PlanarReflection.generated.h"

class UPlanarReflectionComponent;

UCLASS(Blueprintable, MinimalAPI)
class APlanarReflection : public ASceneCapture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlanarReflectionComponent* PlanarReflectionComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPreviewPlane;
    
    APlanarReflection(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnInterpToggle(bool bEnable);
    
};

