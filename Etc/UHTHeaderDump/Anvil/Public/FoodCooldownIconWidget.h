#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FoodCooldownIconWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UFoodCooldownIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FoodIconImage;
    
public:
    UFoodCooldownIconWidget();

};

