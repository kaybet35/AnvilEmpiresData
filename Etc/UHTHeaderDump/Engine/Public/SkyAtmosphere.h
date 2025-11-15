#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "SkyAtmosphere.generated.h"

class USkyAtmosphereComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASkyAtmosphere : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyAtmosphereComponent* SkyAtmosphereComponent;
    
public:
    ASkyAtmosphere(const FObjectInitializer& ObjectInitializer);

};

