#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CurveBase.h"
#include "RichCurve.h"
#include "CurveLinearColor.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENGINE_API UCurveLinearColor : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurves[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustHue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustBrightnessCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustVibrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustMinAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustMaxAlpha;
    
    UCurveLinearColor();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetUnadjustedLinearColorValue(float InTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetLinearColorValue(float InTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetClampedLinearColorValue(float InTime) const;
    
};

