#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "Templates/SubclassOf.h"
#include "FamilyAreaMarkerWindow.generated.h"

class UFamilyMemberListItemWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UFamilyAreaMarkerWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* FamilyMembersScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFamilyMemberListItemWidget> FamilyMemberListItemWidgetType;
    
public:
    UFamilyAreaMarkerWindow();

};

