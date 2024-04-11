#pragma once
#include "CoreMinimal.h"
#include "EntityTemplate.h"
#include "BaseBuildSiteEntity.generated.h"

class UBoxCollisionProxyComponent;
class UBuildSiteProxyComponent;
class UDecayProxyComponent;
class UFootprintCollisionProxyComponent;
class UHealthProxyComponent;
class UMeshCollisionProxyComponent;
class UStructureProxyComponent;
class UTeamProxyComponent;

UCLASS(Abstract, Blueprintable)
class R2_API UBaseBuildSiteEntity : public UEntityTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSiteProxyComponent* BuildSiteComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamProxyComponent* TeamComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthProxyComponent* HealthComp;
    
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
    UStructureProxyComponent* StructureComp;
    
    UBaseBuildSiteEntity();

};

