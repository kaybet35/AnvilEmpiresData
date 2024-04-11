#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ServerListEntry.h"
#include "ServerListEntryView.generated.h"

UCLASS(Blueprintable)
class ANVIL_API UServerListEntryView : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerListEntry ServerListEntry;
    
    UServerListEntryView();

};

