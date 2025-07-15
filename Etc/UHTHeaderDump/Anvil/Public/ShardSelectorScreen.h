#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "ShardSelectorScreen.generated.h"

class UAnvilButtonWidget;
class UListView;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UShardSelectorScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ShardList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* RefreshButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* BackButton;
    
public:
    UShardSelectorScreen();

private:
    UFUNCTION(BlueprintCallable)
    void OnRefreshButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonClicked();
    
};

