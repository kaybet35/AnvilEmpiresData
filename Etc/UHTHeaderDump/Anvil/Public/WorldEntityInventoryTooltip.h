#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "WorldEntityInventoryTooltip.generated.h"

class UHeaderContainer;
class UThrobber;
class UUniformGridPanel;
class UWorldEntityInventoryGridItem;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UWorldEntityInventoryTooltip : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeaderContainer* HeaderContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* GridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrobber* LoadingThrobber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldEntityInventoryGridItem> WorldEntityInventoryGridItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumColumns;
    
public:
    UWorldEntityInventoryTooltip();

};

