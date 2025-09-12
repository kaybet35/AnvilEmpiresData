#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "MapAvatarContainerWidget.generated.h"

class UCanvasPanel;
class UMapAvatarWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMapAvatarContainerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapAvatarWidget> MapAvatarWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapAvatarCanvas;
    
public:
    UMapAvatarContainerWidget();

};

