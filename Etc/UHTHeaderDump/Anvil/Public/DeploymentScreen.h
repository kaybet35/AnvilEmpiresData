#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AnvilScreen.h"
#include "DeploymentScreen.generated.h"

class UAnvilButtonWidget;
class UNewMapWidget;
class UTextBlock;
class UThrobber;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDeploymentScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNewMapWidget* MapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrobber* Throbber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* LogoutButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* RefreshButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ConnectingText;
    
public:
    UDeploymentScreen();

private:
    UFUNCTION(BlueprintCallable)
    void OnRefreshButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLogoutButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsRefreshButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetThrobberVisibility();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetConnectingTextVisibility();
    
};

