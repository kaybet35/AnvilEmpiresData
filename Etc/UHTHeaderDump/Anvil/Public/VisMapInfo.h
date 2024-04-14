#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisMapInfo.generated.h"

class UTweakableDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisMapInfo : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTweakableDataComponent* TweakableDataComponent;
    
    AVisMapInfo(const FObjectInitializer& ObjectInitializer);

};

