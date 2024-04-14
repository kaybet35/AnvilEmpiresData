#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisItemStash.generated.h"

class UArrowComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisItemStash : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* LootMarkerVFXComponent;
    
    AVisItemStash(const FObjectInitializer& ObjectInitializer);

};

