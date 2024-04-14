#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "RefineryWindow.generated.h"

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
    
public:
    URefineryWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnStatusChanged(const bool& Old, const bool& New);
    
};

