#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "AtmosphericFog.generated.h"

class UAtmosphericFogComponent;

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class AAtmosphericFog : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtmosphericFogComponent* AtmosphericFogComponent;
    
public:
    AAtmosphericFog(const FObjectInitializer& ObjectInitializer);

};

