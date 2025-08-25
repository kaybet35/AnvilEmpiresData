#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AvatarGroupWidget.generated.h"

class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAvatarGroupWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* AvatarProfileGridPanel;
    
public:
    UAvatarGroupWidget();

};

