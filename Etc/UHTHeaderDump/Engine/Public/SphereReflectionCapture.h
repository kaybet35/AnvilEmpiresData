#pragma once
#include "CoreMinimal.h"
#include "ReflectionCapture.h"
#include "SphereReflectionCapture.generated.h"

class UDrawSphereComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASphereReflectionCapture : public AReflectionCapture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDrawSphereComponent* DrawCaptureRadius;
    
public:
    ASphereReflectionCapture(const FObjectInitializer& ObjectInitializer);

};

