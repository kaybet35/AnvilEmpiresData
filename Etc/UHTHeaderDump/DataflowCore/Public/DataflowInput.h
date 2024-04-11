#pragma once
#include "CoreMinimal.h"
#include "DataflowConnection.h"
#include "DataflowInput.generated.h"

USTRUCT(BlueprintType)
struct FDataflowInput : public FDataflowConnection {
    GENERATED_BODY()
public:
    DATAFLOWCORE_API FDataflowInput();
};

