#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "Templates/SubclassOf.h"
#include "UIGlobals.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class ANVIL_API AUIGlobals : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TooltipClass;
    
    AUIGlobals(const FObjectInitializer& ObjectInitializer);

};

