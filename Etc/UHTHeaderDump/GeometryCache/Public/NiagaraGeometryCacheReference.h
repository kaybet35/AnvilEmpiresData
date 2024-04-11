#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraUserParameterBinding -FallbackName=NiagaraUserParameterBinding
#include "NiagaraGeometryCacheReference.generated.h"

class UGeometryCache;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNiagaraGeometryCacheReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCache* GeometryCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding GeometryCacheUserParamBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    GEOMETRYCACHE_API FNiagaraGeometryCacheReference();
};

