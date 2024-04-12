#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "PowerMillDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UPowerMillDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimalActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    UPowerMillDataComponent(const FObjectInitializer& ObjectInitializer);

};

