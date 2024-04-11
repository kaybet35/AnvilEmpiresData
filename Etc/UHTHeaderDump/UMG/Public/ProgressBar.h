#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EProgressBarFillStyle -FallbackName=EProgressBarFillStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EProgressBarFillType -FallbackName=EProgressBarFillType
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ProgressBarStyle -FallbackName=ProgressBarStyle
#include "Widget.h"
#include "Widget.h"
#include "Widget.h"
#include "ProgressBar.generated.h"

UCLASS(Blueprintable)
class UMG_API UProgressBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressBarStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EProgressBarFillType::Type> BarFillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EProgressBarFillStyle::Type> BarFillStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMarquee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BorderPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat PercentDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FillColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor FillColorAndOpacityDelegate;
    
    UProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMarquee(bool InbIsMarquee);
    
    UFUNCTION(BlueprintCallable)
    void SetFillColorAndOpacity(FLinearColor InColor);
    
};

