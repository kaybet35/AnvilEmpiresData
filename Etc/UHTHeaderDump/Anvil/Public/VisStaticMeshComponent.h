#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=VisStaticMeshComponentBase -FallbackName=VisStaticMeshComponentBase
#include "VisStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisStaticMeshComponent : public UVisStaticMeshComponentBase {
    GENERATED_BODY()
public:
    UVisStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

