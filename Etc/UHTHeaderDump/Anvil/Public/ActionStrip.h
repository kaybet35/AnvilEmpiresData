#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ActionStrip.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UActionStrip : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DismantleTimerText;
    
public:
    UActionStrip();

};

