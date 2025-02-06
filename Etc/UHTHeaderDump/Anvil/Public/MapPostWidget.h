#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EventReply -FallbackName=EventReply
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "MapPostWidget.generated.h"

class UBorder;
class UButton;
class UEditableTextBox;
class UMapPostReplyWidget;
class USizeBox;
class UTextBlock;
class UVerticalBox;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMapPostWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapPostReplyWidget> MapPostReplyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalTextWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle UpVoteButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle UpVoteButtonVotedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle DownVoteButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle DownVoteButtonVotedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ExpandedMapPostBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* HeaderBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* OriginalTextSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* OriginalPostTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* OriginalPosterNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RankTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* UpVoteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DownVoteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NetVoteCountTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimeSinceOriginalPostTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* RepliesSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* RepliesVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* ReplyInputTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ReplyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* RenderStateSwitcher;
    
public:
    UMapPostWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpVoteButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnReplyInputTextCommitted(const FText& ReplyText, const TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnReplyInputTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void OnReplyButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnHeaderClicked(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnDownVoteButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsVoteButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    FText GetTimeSinceOriginalPostText();
    
    UFUNCTION(BlueprintCallable)
    FText GetRankText();
    
    UFUNCTION(BlueprintCallable)
    FText GetOriginalPosterNameText();
    
    UFUNCTION(BlueprintCallable)
    FText GetNetVoteCountText();
    
};

