#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "ResourceDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UResourceDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GatherHitCount;
    
    UResourceDataComponent(const FObjectInitializer& ObjectInitializer);

};

