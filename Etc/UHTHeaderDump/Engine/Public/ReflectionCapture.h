#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "ReflectionCapture.generated.h"

class UReflectionCaptureComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AReflectionCapture : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReflectionCaptureComponent* CaptureComponent;
    
public:
    AReflectionCapture(const FObjectInitializer& ObjectInitializer);

};

