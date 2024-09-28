#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisLatticeMine.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisLatticeMine : public AVisActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LatticeArea;
    
public:
    AVisLatticeMine(const FObjectInitializer& ObjectInitializer);

};

