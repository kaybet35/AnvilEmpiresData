#pragma once
#include "CoreMinimal.h"
#include "VisCookingStructure.h"
#include "VisFurnace.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AVisFurnace : public AVisCookingStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGlowIntensity;
    
public:
    AVisFurnace(const FObjectInitializer& ObjectInitializer);

};

