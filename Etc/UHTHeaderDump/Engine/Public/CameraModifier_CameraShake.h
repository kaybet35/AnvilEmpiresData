#pragma once
#include "CoreMinimal.h"
#include "ActiveCameraShakeInfo.h"
#include "CameraModifier.h"
#include "PooledCameraShakes.h"
#include "Templates/SubclassOf.h"
#include "CameraModifier_CameraShake.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable, Config=Camera)
class ENGINE_API UCameraModifier_CameraShake : public UCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveCameraShakeInfo> ActiveShakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UCameraShakeBase>, FPooledCameraShakes> ExpiredPooledShakesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplitScreenShakeScale;
    
public:
    UCameraModifier_CameraShake();

};

