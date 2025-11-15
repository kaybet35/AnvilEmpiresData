#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CurveBase.h"
#include "RichCurve.h"
#include "CurveVector.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UCurveVector : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurves[3];
    
    UCurveVector();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVectorValue(float InTime) const;
    
};

