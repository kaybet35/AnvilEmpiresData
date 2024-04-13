#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AlertWidget.generated.h"

class UButton;
class USizeBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAlertWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AlertTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* AcceptButtonBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* AcceptButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* DeclineButtonBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DeclineButton;
    
public:
    UAlertWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnDeclineClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptClicked();
    
};

