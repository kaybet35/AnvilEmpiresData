#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "BandwidthTestGenerator.h"
#include "BandwidthTestActor.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class ABandwidthTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBandwidthTestGenerator BandwidthGenerator;
    
    ABandwidthTestActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

