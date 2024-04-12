#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisPowerMill.generated.h"

class UPowerMillDataComponent;
class USkeletalMeshComponent;
class UVisPowerUnitAnimInstance;

UCLASS(Blueprintable)
class ANVIL_API AVisPowerMill : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPowerMillDataComponent* PowerMillDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SKMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisPowerUnitAnimInstance* AnimInst;
    
    AVisPowerMill(const FObjectInitializer& ObjectInitializer);

};

