#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "ProjectileMovementDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UProjectileMovementDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidden;
    
    UProjectileMovementDataComponent(const FObjectInitializer& ObjectInitializer);

};

