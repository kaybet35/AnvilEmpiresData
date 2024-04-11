#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "MapIcon.h"
#include "BeaconTowerPlayerInfoMapIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UBeaconTowerPlayerInfoMapIcon : public UMapIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FriendlyColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor EnemyColour;
    
public:
    UBeaconTowerPlayerInfoMapIcon();

};

