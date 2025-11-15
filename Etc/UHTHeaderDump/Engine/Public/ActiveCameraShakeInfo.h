#pragma once
#include "CoreMinimal.h"
#include "ActiveCameraShakeInfo.generated.h"

class UCameraShakeBase;
class UCameraShakeSourceComponent;

USTRUCT(BlueprintType)
struct FActiveCameraShakeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShakeBase* ShakeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCustomInitialized;
    
    ENGINE_API FActiveCameraShakeInfo();
};

