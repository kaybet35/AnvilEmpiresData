#pragma once
#include "CoreMinimal.h"
#include "HUDWindow.h"
#include "LoreWindow.generated.h"

class UImage;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API ULoreWindow : public UHUDWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TitleIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* BodyText;
    
public:
    ULoreWindow();

};

