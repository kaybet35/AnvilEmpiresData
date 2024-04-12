#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "OpeningScreen.generated.h"

class UAnvilButtonWidget;
class UButton;
class UDisclaimerWidget;
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
    UTextBlock* Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* RoadmapPopupButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDisclaimerWidget* DisclaimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AnnouncementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DiscordRoleButton;
    
    UOpeningScreen();

protected:
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
    bool IsDiscordRoleButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    FText GetAnnouncementText();
    
};

