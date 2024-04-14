#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "WindMillDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UWindMillDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    UWindMillDataComponent(const FObjectInitializer& ObjectInitializer);

};

