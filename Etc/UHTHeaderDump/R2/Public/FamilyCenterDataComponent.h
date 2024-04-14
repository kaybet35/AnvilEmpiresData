#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "FamilyCenterDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UFamilyCenterDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FamilyAreaRadius;
    
    UFamilyCenterDataComponent(const FObjectInitializer& ObjectInitializer);

};

