#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "PrecomputedVisibilityOverrideVolume.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class APrecomputedVisibilityOverrideVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverrideVisibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverrideInvisibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OverrideInvisibleLevels;
    
    APrecomputedVisibilityOverrideVolume(const FObjectInitializer& ObjectInitializer);

};

