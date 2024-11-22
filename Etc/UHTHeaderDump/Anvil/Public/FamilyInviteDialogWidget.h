#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "FamilyInviteDialogWidget.generated.h"

class UAnvilButtonWidget;
class UFamilyInviteDialogPlayerListEntryWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UFamilyInviteDialogWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFamilyInviteDialogPlayerListEntryWidget> PlayerListEntryWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* PlayerListScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* CloseButton;
    
public:
    UFamilyInviteDialogWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnCloseButtonClicked();
    
};

