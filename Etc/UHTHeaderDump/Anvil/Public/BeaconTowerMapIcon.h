#pragma once
#include "CoreMinimal.h"
#include "MapIcon.h"
#include "BeaconTowerMapIcon.generated.h"

class UCanvasPanelSlot;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UBeaconTowerMapIcon : public UMapIcon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* IconSlot;
    
public:
    UBeaconTowerMapIcon();

};

