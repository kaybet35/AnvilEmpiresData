#pragma once
#include "CoreMinimal.h"
#include "ReflectionCaptureComponent.h"
#include "BoxReflectionCaptureComponent.generated.h"

class UBoxComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoxTransitionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PreviewInfluenceBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PreviewCaptureBox;
    
    UBoxReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer);

};

