#pragma once
#include "CoreMinimal.h"
#include "FamilyHouseInfoType.generated.h"

USTRUCT(BlueprintType)
struct FFamilyHouseInfoType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FamilyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasHousePledge;
    
    R2_API FFamilyHouseInfoType();
};

