#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "TreeFallDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UTreeFallDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingDir;
    
    UTreeFallDataComponent(const FObjectInitializer& ObjectInitializer);

};

