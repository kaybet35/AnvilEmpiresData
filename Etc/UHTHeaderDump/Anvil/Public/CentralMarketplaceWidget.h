#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EVisItemCategory.h"
#include "Templates/SubclassOf.h"
#include "CentralMarketplaceWidget.generated.h"

class UAnvilButtonWidget;
class UCentralMarketplaceListEntryWidget;
class UCentralMarketplaceOrderGridPanelWidget;
class UComboBoxString;
class UEditableTextBox;
class UHeaderContainer;
class UHorizontalBox;
class UImage;
class UItemCategoryButton;
class UScrollBox;
class UTextBlock;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UCentralMarketplaceWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCentralMarketplaceListEntryWidget> CentralMarketplaceListEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemCategoryButton> ItemCategoryButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVisItemCategory, UTexture2D*> ItemCategoryIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ItemCategoryButtonHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* MarketTabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* SaleListEntriesScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* OrderListEntriesScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* BuySellTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* PlaceOrderTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ActiveOrdersTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeaderContainer* HeaderContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCentralMarketplaceOrderGridPanelWidget* OrderGridPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SelectedOrderItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectedOrderItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* SelectedOrderItemQuantityEditableTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* SelectedOrderItemPriceEditableTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* SelectedOrderItemMinQualityComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SelectedOrderItemTotalPriceTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* SelectedItemPlaceOrderButton;
    
public:
    UCentralMarketplaceWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnSelectedItemPlaceOrderButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnPlaceOrderTabButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnBuySellTabButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnActiveOrdersTabButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectedOrderItemQuantityEditableTextBoxEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectedOrderItemPriceEditableTextBoxEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectedOrderItemMinQualityComboBoxEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectedItemPlaceOrderButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaceOrderTabButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsBuySellTabButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveOrdersTabButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetSelectedOrderItemTotalPriceTextVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetSelectedOrderItemTotalPriceText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetItemCategoryButtonPanelVisibility();
    
};

