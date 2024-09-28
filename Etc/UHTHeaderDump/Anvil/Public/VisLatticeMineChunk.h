#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisLatticeMineChunk.generated.h"

class UArrowComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisLatticeMineChunk : public AVisActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ChunkMesh;
    
public:
    AVisLatticeMineChunk(const FObjectInitializer& ObjectInitializer);

};

