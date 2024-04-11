#pragma once
#include "CoreMinimal.h"
#include "GridItemWidget.h"
#include "RefineryProducibleItemWidget.generated.h"

class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API URefineryProducibleItemWidget : public UGridItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* OutputCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* OutputCountContainer;
    
public:
    URefineryProducibleItemWidget();

};

