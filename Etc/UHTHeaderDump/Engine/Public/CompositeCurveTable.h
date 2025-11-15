#pragma once
#include "CoreMinimal.h"
#include "CurveTable.h"
#include "CompositeCurveTable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UCompositeCurveTable : public UCurveTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveTable*> ParentTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCurveTable*> OldParentTables;
    
public:
    UCompositeCurveTable();

};

