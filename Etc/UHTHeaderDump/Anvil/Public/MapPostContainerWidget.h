#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "MapPostContainerWidget.generated.h"

class UCanvasPanel;
class UMapPostWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMapPostContainerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapPostWidget> MapPostWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapPostCanvas;
    
public:
    UMapPostContainerWidget();

};

