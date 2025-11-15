#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionEditorHash.generated.h"

UCLASS(Abstract, Blueprintable, Within=WorldPartition)
class ENGINE_API UWorldPartitionEditorHash : public UObject {
    GENERATED_BODY()
public:
    UWorldPartitionEditorHash();

};

