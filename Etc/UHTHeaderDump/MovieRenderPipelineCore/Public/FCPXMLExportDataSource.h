#pragma once
#include "CoreMinimal.h"
#include "FCPXMLExportDataSource.generated.h"

UENUM(BlueprintType)
enum class FCPXMLExportDataSource : uint8 {
    OutputMetadata,
    SequenceData,
};

