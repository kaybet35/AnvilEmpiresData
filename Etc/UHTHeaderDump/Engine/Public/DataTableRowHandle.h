#pragma once
#include "CoreMinimal.h"
#include "DataTableRowHandle.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct ENGINE_API FDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FDataTableRowHandle();
};

