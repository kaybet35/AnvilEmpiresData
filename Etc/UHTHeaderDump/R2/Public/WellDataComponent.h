#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "WellDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UWellDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalLevel;
    
    UWellDataComponent(const FObjectInitializer& ObjectInitializer);

};

