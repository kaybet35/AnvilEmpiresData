#pragma once
#include "CoreMinimal.h"
#include "EBuildSiteCategory.h"
#include "EBuildSiteVisibility.h"
#include "VisActor.h"
#include "VisBuildSite.generated.h"

class UArrowComponent;
class UBuildSiteDataComponent;
class UBuildSiteProxyComponent;
class UDecalComponent;
class UMaterialInterface;
class UStaticMeshComponent;
class UStructureDataComponent;
class UTexture2D;
class UVisBuildGhostComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisBuildSite : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisBuildGhostComponent* VisBuildGhostComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSiteDataComponent* BuildSiteDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStructureDataComponent* StructureDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildSiteCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildSiteVisibility BuildSiteVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildSiteProxyComponent* BuildSiteCDO;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* BuildCollisionDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildSiteMaterial;
    
public:
    AVisBuildSite(const FObjectInitializer& ObjectInitializer);

};

