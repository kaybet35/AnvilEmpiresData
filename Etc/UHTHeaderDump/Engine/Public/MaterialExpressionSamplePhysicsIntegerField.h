#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldIntegerType -FallbackName=EFieldIntegerType
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSamplePhysicsIntegerField.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionSamplePhysicsIntegerField : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput WorldPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldIntegerType> FieldTarget;
    
    UMaterialExpressionSamplePhysicsIntegerField();

};

