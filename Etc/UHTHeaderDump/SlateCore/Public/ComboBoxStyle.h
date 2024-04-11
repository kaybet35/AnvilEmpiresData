#pragma once
#include "CoreMinimal.h"
#include "ComboButtonStyle.h"
#include "Margin.h"
#include "SlateSound.h"
#include "SlateWidgetStyle.h"
#include "ComboBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FComboBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboButtonStyle ComboButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound PressedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound SelectionChangeSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ContentPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin MenuRowPadding;
    
    FComboBoxStyle();
};

