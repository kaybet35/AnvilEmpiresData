#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisHitConverterStructure.generated.h"

class UHitConverterDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisHitConverterStructure : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitConverterDataComponent* HitConverterDataComponent;
    
    AVisHitConverterStructure(const FObjectInitializer& ObjectInitializer);

};

