#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PartitionActor -FallbackName=PartitionActor
#include "LandscapeSplineMeshesActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, NotPlaceable)
class LANDSCAPE_API ALandscapeSplineMeshesActor : public APartitionActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponents;
    
public:
    ALandscapeSplineMeshesActor(const FObjectInitializer& ObjectInitializer);

};

