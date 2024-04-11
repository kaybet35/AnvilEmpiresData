#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AnvilScreen.h"
#include "ConnectScreen.generated.h"

class UAnvilButtonWidget;
class UTextBlock;
class UThrobber;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UConnectScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* RefreshButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ConnectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrobber* DownloadingThrobber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameValidationMessageText;
    
public:
    UConnectScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRefreshButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsRefreshButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsConnectButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsBackButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetThrobberVisibility();
    
};

