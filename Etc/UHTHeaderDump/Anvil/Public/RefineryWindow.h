#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
#include "StructureWindow.h"
#include "RefineryWindow.generated.h"

class UButton;
class URefineryProducibleListWidget;
class URefineryQueueWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API URefineryWindow : public UStructureWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URefineryProducibleListWidget* RefineryProducibleItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URefineryQueueWidget* RefineryQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* QueueTotalTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* QueueTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StatusText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PrivateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle PrivateButtonStyleOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle PrivateButtonStyleOff;
    
public:
    URefineryWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnStatusChanged(const bool& Old, const bool& New);
    
    UFUNCTION(BlueprintCallable)
    void OnPrivateButtonClicked();
    
};

