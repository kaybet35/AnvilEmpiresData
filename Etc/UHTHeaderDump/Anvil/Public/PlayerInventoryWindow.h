#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "PlayerInventoryWindow.generated.h"

class UPlayerAvatarWidget;
class UPlayerInventoryWidget;
class URefineryProducibleListWidget;
class URefineryQueueWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UPlayerInventoryWindow : public UStructureWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerInventoryWidget* PlayerInventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerAvatarWidget* PlayerAvatarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URefineryProducibleListWidget* RefineryProducibleItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URefineryQueueWidget* RefineryQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* QueueTotalTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* QueueTimeText;
    
    UPlayerInventoryWindow();

};

