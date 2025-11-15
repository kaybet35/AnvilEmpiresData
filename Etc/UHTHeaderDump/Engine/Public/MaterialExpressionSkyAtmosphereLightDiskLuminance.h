#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSkyAtmosphereLightDiskLuminance.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionSkyAtmosphereLightDiskLuminance : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput DiskAngularDiameterOverride;
    
    UMaterialExpressionSkyAtmosphereLightDiskLuminance();

};

