#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "Templates/SubclassOf.h"
#include "RelicTechCenterWindow.generated.h"

class URelicTechProgressWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API URelicTechCenterWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* TechProgressVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URelicTechProgressWidget> RelicTechProgressWidgetClass;
    
public:
    URelicTechCenterWindow();

};

