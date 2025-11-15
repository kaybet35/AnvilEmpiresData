#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSphericalParticleOpacity.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstantDensity;
    
    UMaterialExpressionSphericalParticleOpacity();

};

