#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VisActor.h"
#include "VisImpactEffect.generated.h"

class AActor;
class UArrowComponent;
class UImpactSurfaceDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisImpactEffect : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> HitEffectActors[17];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImpactSurfaceDataComponent* ImpactSurfaceDataComponent;
    
public:
    AVisImpactEffect(const FObjectInitializer& ObjectInitializer);

};

