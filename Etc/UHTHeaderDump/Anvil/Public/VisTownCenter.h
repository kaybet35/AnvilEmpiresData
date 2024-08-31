#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisTownCenter.generated.h"

class UTownHallDataComponent;
class UVisTownAreaMarkerDecalComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisTownCenter : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTownHallDataComponent* TownHallDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisTownAreaMarkerDecalComponent* TownAreaMarkerDecal;
    
    AVisTownCenter(const FObjectInitializer& ObjectInitializer);

};

