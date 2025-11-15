#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "SpatialHashRuntimeGrid.h"
#include "SpatialHashRuntimeGridInfo.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ASpatialHashRuntimeGridInfo : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpatialHashRuntimeGrid GridSettings;
    
    ASpatialHashRuntimeGridInfo(const FObjectInitializer& ObjectInitializer);

};

