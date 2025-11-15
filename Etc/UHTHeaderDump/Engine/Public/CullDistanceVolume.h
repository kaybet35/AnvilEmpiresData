#pragma once
#include "CoreMinimal.h"
#include "CullDistanceSizePair.h"
#include "Volume.h"
#include "CullDistanceVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ACullDistanceVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCullDistanceSizePair> CullDistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    ACullDistanceVolume(const FObjectInitializer& ObjectInitializer);

};

