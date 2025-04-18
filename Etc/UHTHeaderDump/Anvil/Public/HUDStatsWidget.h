#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HUDStatsWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UHUDStatsWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StatsText;
    
public:
    UHUDStatsWidget();

};

