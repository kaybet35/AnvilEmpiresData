#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "LadderDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API ULadderDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHalfLength;
    
    ULadderDataComponent(const FObjectInitializer& ObjectInitializer);

};

