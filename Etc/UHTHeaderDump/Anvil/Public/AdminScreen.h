#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "AnvilScreen.h"
#include "AdminScreen.generated.h"

class UAdminPlayerListItemData;
class UAnvilButtonWidget;
class UEditableTextBox;
class UListView;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAdminScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* PlayerListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* SortByNameButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* SortByDistanceButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ReloadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* SearchBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAdminPlayerListItemData*> PlayerList;
    
public:
    UAdminScreen();

private:
    UFUNCTION(BlueprintCallable)
    void ReloadList();
    
    UFUNCTION(BlueprintCallable)
    void OnSortByName();
    
    UFUNCTION(BlueprintCallable)
    void OnSortByDistance();
    
    UFUNCTION(BlueprintCallable)
    void OnSearch(const FText& Text, TEnumAsByte<ETextCommit::Type> Method);
    
};

