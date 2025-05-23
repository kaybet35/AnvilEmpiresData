#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "TownCenterWindow.generated.h"

class UButton;
class UHeaderContainer;
class UHorizontalBox;
class UImage;
class UPledgedPlayerBox;
class UStatusWidget;
class UTextBlock;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UTownCenterWindow : public UStructureWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPledgedPlayerBox* PledgedPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LocalPlayerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CivicPledgePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeaderContainer* PledgedHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* RareResourceStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* IncreaseTownStatusButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* UpkeepBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UpkeepIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UpkeepTextBlock;
    
public:
    UTownCenterWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnIncreaseTownStatusButtonClicked();
    
};

