#pragma once
#include "CoreMinimal.h"
#include "DataTable.h"
#include "CompositeDataTable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UCompositeDataTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> ParentTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> OldParentTables;
    
public:
    UCompositeDataTable();

};

