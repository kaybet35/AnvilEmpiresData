#pragma once
#include "CoreMinimal.h"
#include "EMirrorRowType.h"
#include "TableRowBase.h"
#include "MirrorTableRow.generated.h"

USTRUCT(BlueprintType)
struct FMirrorTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MirroredName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMirrorRowType::Type> MirrorEntryType;
    
    ENGINE_API FMirrorTableRow();
};

