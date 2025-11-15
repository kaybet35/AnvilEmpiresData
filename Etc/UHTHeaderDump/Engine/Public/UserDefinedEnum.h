#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Enum -FallbackName=Enum
#include "UserDefinedEnum.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UUserDefinedEnum : public UEnum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> DisplayNameMap;
    
    UUserDefinedEnum();

};

