#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "RichSoilDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API URichSoilDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    URichSoilDataComponent(const FObjectInitializer& ObjectInitializer);

};

