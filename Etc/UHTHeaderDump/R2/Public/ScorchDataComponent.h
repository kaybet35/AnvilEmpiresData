#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "ScorchDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UScorchDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ScorchVisualBits;
    
    UScorchDataComponent(const FObjectInitializer& ObjectInitializer);

};

