#pragma once
#include "CoreMinimal.h"
#include "RigDispatch_MetadataBase.h"
#include "RigDispatch_SetMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase {
    GENERATED_BODY()
public:
    FRigDispatch_SetMetadata();
};

