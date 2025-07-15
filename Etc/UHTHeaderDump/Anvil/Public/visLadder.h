#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "visLadder.generated.h"

class UArrowComponent;
class ULadderDataComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTeamDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AvisLadder : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamDataComponent* TeamDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULadderDataComponent* LadderDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, UStaticMesh*> HalfLengthToLadderMeshes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LadderMesh;
    
public:
    AvisLadder(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLadderMesh(float HalfLength);
    
};

