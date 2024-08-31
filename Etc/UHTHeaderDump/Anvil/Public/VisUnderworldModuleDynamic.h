#pragma once
#include "CoreMinimal.h"
#include "VisUnderworldModule.h"
#include "VisUnderworldModuleDynamic.generated.h"

class ADynamicPrefab;
class UDynamicPrefabDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisUnderworldModuleDynamic : public AVisUnderworldModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicPrefabDataComponent* DynamicPrefabDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADynamicPrefab* SpawnedDynamicPrefab;
    
public:
    AVisUnderworldModuleDynamic(const FObjectInitializer& ObjectInitializer);

};

