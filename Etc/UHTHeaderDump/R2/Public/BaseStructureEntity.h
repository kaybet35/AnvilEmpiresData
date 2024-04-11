#pragma once
#include "CoreMinimal.h"
#include "EntityTemplate.h"
#include "BaseStructureEntity.generated.h"

class UBoxCollisionProxyComponent;
class UDecayProxyComponent;
class UDestroyableProxyComponent;
class UFootprintCollisionProxyComponent;
class UHealthProxyComponent;
class UMeshCollisionProxyComponent;
class URepairProxyComponent;
class UScorchProxyComponent;
class UStructureProxyComponent;
class UTeamProxyComponent;

UCLASS(Abstract, Blueprintable)
class R2_API UBaseStructureEntity : public UEntityTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamProxyComponent* TeamComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthProxyComponent* HealthComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URepairProxyComponent* RepairComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStructureProxyComponent* StructureComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestroyableProxyComponent* DestroyableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshCollisionProxyComponent* MeshCollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFootprintCollisionProxyComponent* FootprintComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxCollisionProxyComponent* UseBoxComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxCollisionProxyComponent* ActionBoxComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecayProxyComponent* DecayComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScorchProxyComponent* ScorchComp;
    
    UBaseStructureEntity();

};

