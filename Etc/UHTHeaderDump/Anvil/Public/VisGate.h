#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisGate.generated.h"

class UGateDataComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisGate : public AVisStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGateDataComponent* GateDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    AVisGate(const FObjectInitializer& ObjectInitializer);

};

