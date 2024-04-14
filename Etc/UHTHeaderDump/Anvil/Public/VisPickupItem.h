#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisPickupItem.generated.h"

class UArrowComponent;
class UNiagaraComponent;
class UPickupDataComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisPickupItem : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupDataComponent* PickupDataComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* LootMarkerVFXComponent;
    
public:
    AVisPickupItem(const FObjectInitializer& ObjectInitializer);

};

