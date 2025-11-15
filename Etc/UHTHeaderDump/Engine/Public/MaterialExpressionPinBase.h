#pragma once
#include "CoreMinimal.h"
#include "CompositeReroute.h"
#include "EEdGraphPinDirection.h"
#include "MaterialExpression.h"
#include "MaterialExpressionPinBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionPinBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompositeReroute> ReroutePins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEdGraphPinDirection> PinDirection;
    
    UMaterialExpressionPinBase();

};

