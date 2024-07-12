#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisWorldEntrance.generated.h"

class UArrowComponent;
class UGrassRemovalVolumeComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisWorldEntrance : public AVisActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrassRemovalVolumeComponent* GrassRemovalVolume;
    
public:
    AVisWorldEntrance(const FObjectInitializer& ObjectInitializer);

};

