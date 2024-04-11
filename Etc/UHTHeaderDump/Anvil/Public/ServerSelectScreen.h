#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AnvilScreen.h"
#include "ServerSelectScreen.generated.h"

class UAnvilButtonWidget;
class UListView;
class UThrobber;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UServerSelectScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ServerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* RefreshButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrobber* Throbber;
    
public:
    UServerSelectScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRefreshButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsRefreshButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetThrobberVisibility();
    
};

