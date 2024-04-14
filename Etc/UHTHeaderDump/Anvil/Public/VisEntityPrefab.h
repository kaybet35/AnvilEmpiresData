#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisEntityPrefab.generated.h"

class UArrowComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisEntityPrefab : public AVisActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MeshVisibilityArea;
    
public:
    AVisEntityPrefab(const FObjectInitializer& ObjectInitializer);

};

