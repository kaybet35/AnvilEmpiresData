#pragma once
#include "CoreMinimal.h"
#include "Object.h"
#include "PackageMap.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class UPackageMap : public UObject {
    GENERATED_BODY()
public:
    UPackageMap();

};

