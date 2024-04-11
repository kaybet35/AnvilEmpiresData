#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HierarchicalInstancedStaticMeshComponent -FallbackName=HierarchicalInstancedStaticMeshComponent
#include "GrassInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FOLIAGE_API UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UGrassInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

