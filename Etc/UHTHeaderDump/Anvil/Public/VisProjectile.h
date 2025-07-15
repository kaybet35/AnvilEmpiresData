#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisProjectile.generated.h"

class UArrowComponent;
class UProjectileMovementDataComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisProjectile : public AVisActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementDataComponent* ProjectileMovementDataComponent;
    
public:
    AVisProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnHiddenChanged(const bool& OldHidden, const bool& NewHidden);
    
};

