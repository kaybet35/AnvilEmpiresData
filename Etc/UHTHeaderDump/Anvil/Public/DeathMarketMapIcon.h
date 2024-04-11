#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MapIcon.h"
#include "DeathMarketMapIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDeathMarketMapIcon : public UMapIcon {
    GENERATED_BODY()
public:
    UDeathMarketMapIcon();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLastDeathLocationChanged(const FVector& OldVal, const FVector& NewVal);
    
};

