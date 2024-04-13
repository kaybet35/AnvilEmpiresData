#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AnvilScreen.h"
#include "OpeningScreen.generated.h"

class UAnvilButtonWidget;
class UAnvilDropdownEntryWidget;
class UButton;
class UDisclaimerWidget;
class UNextTestWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UOpeningScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* PlayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ExitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* OptionsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* RoadmapButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* VersionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CLText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* RoadmapPopupButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNextTestWidget* NextTestWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDisclaimerWidget* DisclaimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AnnouncementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DiscordRoleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DevModeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* ShardDropdown;
    
    UOpeningScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVersionText();
    
    UFUNCTION(BlueprintCallable)
    void ReenableDiscordRoleButton();
    
    UFUNCTION(BlueprintCallable)
    void OnRoadmapClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnRoadmapButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnOptionsButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnExitButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDiscordRoleButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDevModeButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsDiscordRoleButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetShardDropDownVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetAnnouncementText();
    
};

