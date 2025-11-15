#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlendProfileBoneEntry.h"
#include "EBlendProfileMode.h"
#include "BlendProfile.generated.h"

class USkeleton;

UCLASS(Blueprintable, Within=Skeleton)
class ENGINE_API UBlendProfile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* OwningSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlendProfileBoneEntry> ProfileEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlendProfileMode Mode;
    
    UBlendProfile();

};

