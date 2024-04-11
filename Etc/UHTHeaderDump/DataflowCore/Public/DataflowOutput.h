#pragma once
#include "CoreMinimal.h"
#include "DataflowConnection.h"
#include "DataflowOutput.generated.h"

USTRUCT(BlueprintType)
struct DATAFLOWCORE_API FDataflowOutput : public FDataflowConnection {
    GENERATED_BODY()
public:
    FDataflowOutput();
};

