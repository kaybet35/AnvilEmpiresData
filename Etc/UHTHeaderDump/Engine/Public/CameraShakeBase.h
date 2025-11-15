#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraShakeBase.generated.h"

class APlayerCameraManager;
class UCameraShakePattern;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API UCameraShakeBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShakeScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraShakePattern* RootShakePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* CameraManager;
    
public:
    UCameraShakeBase();

    UFUNCTION(BlueprintCallable)
    void SetRootShakePattern(UCameraShakePattern* InPattern);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraShakePattern* GetRootShakePattern() const;
    
};

