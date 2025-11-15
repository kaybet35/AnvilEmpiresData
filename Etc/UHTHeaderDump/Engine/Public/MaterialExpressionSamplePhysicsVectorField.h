#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldVectorType -FallbackName=EFieldVectorType
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSamplePhysicsVectorField.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionSamplePhysicsVectorField : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput WorldPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldVectorType> FieldTarget;
    
    UMaterialExpressionSamplePhysicsVectorField();

};

