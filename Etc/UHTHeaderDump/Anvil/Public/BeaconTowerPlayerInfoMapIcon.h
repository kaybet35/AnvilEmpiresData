#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilBeaconInfoType -FallbackName=EAnvilBeaconInfoType
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "MapIcon.h"
#include "BeaconTowerPlayerInfoMapIcon.generated.h"

class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UBeaconTowerPlayerInfoMapIcon : public UMapIcon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FriendlyColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor EnemyColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilBeaconInfoType, UTexture2D*> BeaconInfoTypeIconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LocationText;
    
public:
    UBeaconTowerPlayerInfoMapIcon();

private:
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetLocationTextVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetLocationText();
    
};

