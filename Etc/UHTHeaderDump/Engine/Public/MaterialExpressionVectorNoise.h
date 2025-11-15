#pragma once
#include "CoreMinimal.h"
#include "EVectorNoiseFunction.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionVectorNoise.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionVectorNoise : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVectorNoiseFunction> NoiseFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTiling: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TileSize;
    
    UMaterialExpressionVectorNoise();

};

