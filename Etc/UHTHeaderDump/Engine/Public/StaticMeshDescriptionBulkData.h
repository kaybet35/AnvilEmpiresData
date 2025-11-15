#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=MeshDescriptionBaseBulkData -FallbackName=MeshDescriptionBaseBulkData
#include "StaticMeshDescriptionBulkData.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UStaticMeshDescriptionBulkData : public UMeshDescriptionBaseBulkData {
    GENERATED_BODY()
public:
    UStaticMeshDescriptionBulkData();

};

