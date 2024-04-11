#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScrollBox -FallbackName=ScrollBox
#include "Templates/SubclassOf.h"
#include "PledgedPlayerBox.generated.h"

class UPledgedPlayerListItem;

UCLASS(Blueprintable)
class ANVIL_API UPledgedPlayerBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPledgedPlayerListItem> ListItemType;
    
    UPledgedPlayerBox();

    UFUNCTION()
    void OnVoteChecked(bool bIsChecked, uint64 PlayerId);
    
};

