#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionActorLoaderInterface.h"
#include "WorldPartitionEditorLoaderAdapter.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UWorldPartitionEditorLoaderAdapter : public UObject, public IWorldPartitionActorLoaderInterface {
    GENERATED_BODY()
public:
    UWorldPartitionEditorLoaderAdapter();


    // Fix for true pure virtual functions not being implemented
};

