#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "PlayerStatusDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UPlayerStatusDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RestedLevel;
    
    UPlayerStatusDataComponent(const FObjectInitializer& ObjectInitializer);

};

