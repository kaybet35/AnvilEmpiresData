#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "VisFoundationFillerMeshDecorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisFoundationFillerMeshDecorComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UVisFoundationFillerMeshDecorComponent(const FObjectInitializer& ObjectInitializer);

};

