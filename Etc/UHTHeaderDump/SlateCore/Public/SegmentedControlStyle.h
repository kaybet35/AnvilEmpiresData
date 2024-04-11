#pragma once
#include "CoreMinimal.h"
#include "CheckBoxStyle.h"
#include "Margin.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "SegmentedControlStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FSegmentedControlStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle ControlStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle FirstControlStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle LastControlStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin UniformPadding;
    
    FSegmentedControlStyle();
};

