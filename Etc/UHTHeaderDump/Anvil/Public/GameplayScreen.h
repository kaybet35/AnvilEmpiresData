#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "GameplayScreen.generated.h"

class UGameplayOverlay;
class UHUDWidget;
class UMapWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UGameplayScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayOverlay* GameplayOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDWidget* HUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapWidget* MapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ContentSwitcher;
    
public:
    UGameplayScreen();

};

