#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "LightmassPortal.generated.h"

class ULightmassPortalComponent;

UCLASS(Blueprintable, MinimalAPI)
class ALightmassPortal : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULightmassPortalComponent* PortalComponent;
    
public:
    ALightmassPortal(const FObjectInitializer& ObjectInitializer);

};

