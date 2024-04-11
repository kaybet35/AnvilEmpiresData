#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisController.generated.h"

class UMapMarkerComponent;
class UPlayerControllerDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisController : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerControllerDataComponent* PlayerControllerDataComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapMarkerComponent* DeathMarker;
    
public:
    AVisController(const FObjectInitializer& ObjectInitializer);

};

