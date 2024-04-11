#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "VisSpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UVisSpringArmComponent(const FObjectInitializer& ObjectInitializer);

};

