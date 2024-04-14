#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisWindMill.generated.h"

class UEntityAttachableDataComponent;
class UPowerUnitDataComponent;
class USkeletalMeshComponent;
class UVisPowerUnitAnimInstance;
class UWindMillDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisWindMill : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWindMillDataComponent* WindMillDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPowerUnitDataComponent* PowerUnitDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEntityAttachableDataComponent* SlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SKMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisPowerUnitAnimInstance* AnimInst;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsRefiningPercentageCurrentMin;
    
public:
    AVisWindMill(const FObjectInitializer& ObjectInitializer);

};

