#pragma once
#include "CoreMinimal.h"
#include "EAnvilAvatarOwnerType.h"
#include "EAnvilAvatarType.h"
#include "AvatarProfile.generated.h"

USTRUCT(BlueprintType)
struct FAvatarProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvatarId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilAvatarType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilAvatarOwnerType OwnerType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 OwnerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Attributes;
    
    R2_API FAvatarProfile();
};

