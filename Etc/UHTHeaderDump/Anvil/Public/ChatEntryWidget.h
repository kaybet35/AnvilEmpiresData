#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EChatType -FallbackName=EChatType
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ChatEntryWidget.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UChatEntryWidget : public UUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EChatType, FText> ModeNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, EChatType> ModeSwitchKeywordMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ChatTextField;
    
public:
    UChatEntryWidget();


    // Fix for true pure virtual functions not being implemented
};

