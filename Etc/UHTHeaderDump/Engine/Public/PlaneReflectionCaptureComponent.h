#pragma once
#include "CoreMinimal.h"
#include "ReflectionCaptureComponent.h"
#include "PlaneReflectionCaptureComponent.generated.h"

class UBoxComponent;
class UDrawSphereComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDrawSphereComponent* PreviewInfluenceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PreviewCaptureBox;
    
    UPlaneReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer);

};

