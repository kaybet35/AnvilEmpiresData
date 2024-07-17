#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "CrenellationFillerMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UCrenellationFillerMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UCrenellationFillerMeshComponent(const FObjectInitializer& ObjectInitializer);

};

