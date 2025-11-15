#pragma once
#include "CoreMinimal.h"
#include "NavigationSystemConfig.h"
#include "NullNavSysConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UNullNavSysConfig : public UNavigationSystemConfig {
    GENERATED_BODY()
public:
    UNullNavSysConfig();

};

