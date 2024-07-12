#pragma once
#include "CoreMinimal.h"
#include "AnvilPrefab.h"
#include "UnderworldModulePrefab.generated.h"

class UArrowComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class R2_API AUnderworldModulePrefab : public AAnvilPrefab {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ModuleFootprint;
    
public:
    AUnderworldModulePrefab(const FObjectInitializer& ObjectInitializer);

};

