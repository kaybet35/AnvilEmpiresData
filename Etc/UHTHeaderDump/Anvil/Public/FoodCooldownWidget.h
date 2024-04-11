#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "FoodCooldownWidget.generated.h"

class UFoodCooldownIconWidget;
class UHorizontalBox;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UFoodCooldownWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FoodTypeIconBrushList[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFoodCooldownIconWidget> FoodCooldownIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* FoodIconsHorizontalBox;
    
public:
    UFoodCooldownWidget();

};

