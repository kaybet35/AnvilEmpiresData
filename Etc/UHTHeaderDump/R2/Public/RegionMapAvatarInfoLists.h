#pragma once
#include "CoreMinimal.h"
#include "MapAvatarInfo.h"
#include "RegionMapAvatarInfoLists.generated.h"

USTRUCT(BlueprintType)
struct FRegionMapAvatarInfoLists {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapAvatarInfo> PersonalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapAvatarInfo> FamilyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapAvatarInfo> PublicList;
    
    R2_API FRegionMapAvatarInfoLists();
};

