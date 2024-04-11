#pragma once
#include "CoreMinimal.h"
#include "AnvilPrefab.h"
#include "AnvilRockActor.generated.h"

class UArrowComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class R2_API AAnvilRockActor : public AAnvilPrefab {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RockMeshComponent;
    
public:
    AAnvilRockActor(const FObjectInitializer& ObjectInitializer);

};

