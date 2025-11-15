#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SubsurfaceProfileStruct.h"
#include "SubsurfaceProfile.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USubsurfaceProfile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubsurfaceProfileStruct Settings;
    
    USubsurfaceProfile();

};

