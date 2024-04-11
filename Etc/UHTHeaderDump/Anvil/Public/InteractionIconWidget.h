#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InteractionIconWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UInteractionIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconBox;
    
public:
    UInteractionIconWidget();

};

