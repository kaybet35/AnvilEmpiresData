#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "RepairStationWindow.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API URepairStationWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* RepairButton;
    
public:
    URepairStationWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnRepairClicked();
    
};

