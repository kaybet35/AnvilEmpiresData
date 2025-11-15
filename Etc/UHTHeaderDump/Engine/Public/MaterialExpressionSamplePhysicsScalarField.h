#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldScalarType -FallbackName=EFieldScalarType
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSamplePhysicsScalarField.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionSamplePhysicsScalarField : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput WorldPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldScalarType> FieldTarget;
    
    UMaterialExpressionSamplePhysicsScalarField();

};

