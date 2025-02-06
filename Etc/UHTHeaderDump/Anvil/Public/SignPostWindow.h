#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "SignPostWindow.generated.h"

class USignPostMessageWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API USignPostWindow : public UStructureWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignPostMessageWidget* MessageWidget;
    
public:
    USignPostWindow();

};

