#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisUnderworldModule.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisUnderworldModule : public AVisActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    AVisUnderworldModule(const FObjectInitializer& ObjectInitializer);

};

