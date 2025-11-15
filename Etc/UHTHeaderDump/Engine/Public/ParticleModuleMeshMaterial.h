#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleMaterialBase.h"
#include "ParticleModuleMeshMaterial.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MeshMaterials;
    
    UParticleModuleMeshMaterial();

};

