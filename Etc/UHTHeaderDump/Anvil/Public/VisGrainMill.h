#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisGrainMill.generated.h"

class UGrainMillDataComponent;
class USkeletalMeshComponent;
class UVisGrainMillAnimInstance;
class UVisPowerUnitAnimInstance;

UCLASS(Blueprintable)
class ANVIL_API AVisGrainMill : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrainMillDataComponent* GrainMillDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CrankHandleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GrainMillMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisPowerUnitAnimInstance* CrankHandleAnimInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisGrainMillAnimInstance* GrainMillAnimInst;
    
    AVisGrainMill(const FObjectInitializer& ObjectInitializer);

};

