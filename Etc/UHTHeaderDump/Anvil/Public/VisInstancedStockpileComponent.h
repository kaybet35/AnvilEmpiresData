#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent
#include "VisInstancedStockpileComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisInstancedStockpileComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* CurrentInstancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UInstancedStaticMeshComponent*> ItemCodeNameInstancedMeshMap;
    
public:
    UVisInstancedStockpileComponent(const FObjectInitializer& ObjectInitializer);

};

