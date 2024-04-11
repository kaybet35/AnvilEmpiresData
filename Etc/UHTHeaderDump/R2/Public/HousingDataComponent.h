#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "HousingDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UHousingDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsForCampsOnly;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PledgedPlayerId;
    
    UHousingDataComponent(const FObjectInitializer& ObjectInitializer);

};

