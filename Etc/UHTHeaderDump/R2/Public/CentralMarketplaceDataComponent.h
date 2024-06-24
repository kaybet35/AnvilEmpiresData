#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "CentralMarketplaceDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UCentralMarketplaceDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    UCentralMarketplaceDataComponent(const FObjectInitializer& ObjectInitializer);

};

