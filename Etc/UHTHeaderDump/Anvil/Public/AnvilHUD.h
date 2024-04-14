#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "AnvilHUD.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, NonTransient)
class ANVIL_API AAnvilHUD : public AHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ScreenshotRT;
    
public:
    AAnvilHUD(const FObjectInitializer& ObjectInitializer);

};

