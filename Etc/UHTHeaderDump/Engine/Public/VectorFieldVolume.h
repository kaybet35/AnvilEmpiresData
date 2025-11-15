#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "VectorFieldVolume.generated.h"

class UVectorFieldComponent;

UCLASS(Blueprintable, MinimalAPI)
class AVectorFieldVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVectorFieldComponent* VectorFieldComponent;
    
public:
    AVectorFieldVolume(const FObjectInitializer& ObjectInitializer);

};

