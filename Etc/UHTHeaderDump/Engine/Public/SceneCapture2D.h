#pragma once
#include "CoreMinimal.h"
#include "SceneCapture.h"
#include "SceneCapture2D.generated.h"

class USceneCaptureComponent2D;

UCLASS(Blueprintable, MinimalAPI)
class ASceneCapture2D : public ASceneCapture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent2D;
    
public:
    ASceneCapture2D(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnInterpToggle(bool bEnable);
    
};

