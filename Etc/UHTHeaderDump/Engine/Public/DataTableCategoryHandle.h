#pragma once
#include "CoreMinimal.h"
#include "DataTableCategoryHandle.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct ENGINE_API FDataTableCategoryHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColumnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowContents;
    
    FDataTableCategoryHandle();
};

