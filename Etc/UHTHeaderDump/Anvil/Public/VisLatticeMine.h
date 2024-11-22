#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisLatticeMine.generated.h"

class UBoxComponent;
class UInstancedStaticMeshComponent;
class ULatticeMineDataComponent;
class ULatticeMineProxyComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisLatticeMine : public AVisActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LatticeAreaVisualizer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULatticeMineProxyComponent* LatticeMineProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULatticeMineDataComponent* LatticeMineDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> MappedMeshes;
    
public:
    AVisLatticeMine(const FObjectInitializer& ObjectInitializer);

};

