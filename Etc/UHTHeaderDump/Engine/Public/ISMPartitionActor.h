#pragma once
#include "CoreMinimal.h"
#include "PartitionActor.h"
#include "SMInstanceManager.h"
#include "SMInstanceManagerProvider.h"
#include "ISMPartitionActor.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API AISMPartitionActor : public APartitionActor, public ISMInstanceManager, public ISMInstanceManagerProvider {
    GENERATED_BODY()
public:
    AISMPartitionActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

