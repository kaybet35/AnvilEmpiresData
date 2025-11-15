#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "ExponentialHeightFog.generated.h"

class UExponentialHeightFogComponent;

UCLASS(Blueprintable, MinimalAPI)
class AExponentialHeightFog : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* Component;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    AExponentialHeightFog(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
};

