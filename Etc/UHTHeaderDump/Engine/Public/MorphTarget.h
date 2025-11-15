#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MorphTarget.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, MinimalAPI)
class UMorphTarget : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BaseSkelMesh;
    
    UMorphTarget();

};

