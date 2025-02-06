#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MapPostReplyWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMapPostReplyWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ReplyPosterNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ReplyTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimeTextBlock;
    
public:
    UMapPostReplyWidget();

private:
    UFUNCTION(BlueprintCallable)
    FText GetTimeSinceReplyText();
    
    UFUNCTION(BlueprintCallable)
    FText GetReplyPosterNameText();
    
};

