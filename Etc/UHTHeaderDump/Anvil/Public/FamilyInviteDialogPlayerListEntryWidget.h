#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FamilyInviteDialogPlayerListEntryWidget.generated.h"

class UButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UFamilyInviteDialogPlayerListEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* InviteButton;
    
public:
    UFamilyInviteDialogPlayerListEntryWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnInviteClicked();
    
    UFUNCTION(BlueprintCallable)
    FText GetPlayerNameText();
    
};

