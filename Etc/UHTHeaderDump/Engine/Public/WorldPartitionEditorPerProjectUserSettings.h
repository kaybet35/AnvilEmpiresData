#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionEditorPerProjectUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class ENGINE_API UWorldPartitionEditorPerProjectUserSettings : public UObject {
    GENERATED_BODY()
public:
    UWorldPartitionEditorPerProjectUserSettings();

};

