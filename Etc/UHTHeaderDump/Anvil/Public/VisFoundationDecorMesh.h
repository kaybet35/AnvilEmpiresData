#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "VisFoundationDecorMesh.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisFoundationDecorMesh : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UVisFoundationDecorMesh(const FObjectInitializer& ObjectInitializer);

};

