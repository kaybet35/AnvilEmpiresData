#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "TableViewStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FTableViewStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundBrush;
    
    FTableViewStyle();
};

