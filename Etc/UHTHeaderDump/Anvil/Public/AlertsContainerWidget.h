#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "AlertsContainerWidget.generated.h"

class UAlertWidget;
class UButton;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAlertsContainerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumVisibleAlerts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAlertWidget> AlertWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* AlertsMaximizeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* AlertsMinimizeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* AlertsVerticalBox;
    
public:
    UAlertsContainerWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnAlertsMinimizeClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnAlertsMaximizeClicked();
    
};

