#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSkyAtmosphereAerialPerspective.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionSkyAtmosphereAerialPerspective : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput WorldPosition;
    
    UMaterialExpressionSkyAtmosphereAerialPerspective();

};

