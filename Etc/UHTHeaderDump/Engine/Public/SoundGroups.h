#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundGroup.h"
#include "SoundGroups.generated.h"

UCLASS(Abstract, Blueprintable, Config=Engine)
class USoundGroups : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundGroup> SoundGroupProfiles;
    
public:
    USoundGroups();

};

