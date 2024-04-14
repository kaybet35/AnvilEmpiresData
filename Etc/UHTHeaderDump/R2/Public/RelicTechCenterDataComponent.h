#pragma once
#include "CoreMinimal.h"
#include "BasicItemCount.h"
#include "DataComponent.h"
#include "RelicTechCenterDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API URelicTechCenterDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicItemCount> RelicTechCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TechItemsDeposited;
    
    URelicTechCenterDataComponent(const FObjectInitializer& ObjectInitializer);

};

