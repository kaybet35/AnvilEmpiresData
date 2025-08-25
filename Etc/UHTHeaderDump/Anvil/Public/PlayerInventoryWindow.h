#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "PlayerInventoryWindow.generated.h"

class UPlayerAvatarWidget;
class UPlayerInventoryWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UPlayerInventoryWindow : public UStructureWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerInventoryWidget* PlayerInventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerAvatarWidget* PlayerAvatarWidget;
    
    UPlayerInventoryWindow();

};

