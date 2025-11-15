#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ScriptStruct -FallbackName=ScriptStruct
#include "EUserDefinedStructureStatus.h"
#include "UserDefinedStruct.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UUserDefinedStruct : public UScriptStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EUserDefinedStructureStatus> Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UUserDefinedStruct();

};

