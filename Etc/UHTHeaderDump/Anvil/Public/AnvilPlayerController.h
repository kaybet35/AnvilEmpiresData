#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "AnvilPlayerController.generated.h"

class UAnvilRootWidget;

UCLASS(Abstract, Blueprintable)
class ANVIL_API AAnvilPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilRootWidget* RootWidget;
    
public:
    AAnvilPlayerController(const FObjectInitializer& ObjectInitializer);

};

