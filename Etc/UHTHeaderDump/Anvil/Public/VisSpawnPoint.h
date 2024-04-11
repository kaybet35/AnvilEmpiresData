#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisSpawnPoint.generated.h"

class UPlayerSpawnerDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisSpawnPoint : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSpawnerDataComponent* PlayerSpawnerDataComponent;
    
    AVisSpawnPoint(const FObjectInitializer& ObjectInitializer);

};

