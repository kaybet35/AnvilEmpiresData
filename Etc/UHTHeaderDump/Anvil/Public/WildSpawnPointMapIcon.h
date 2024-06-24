#pragma once
#include "CoreMinimal.h"
#include "MapIcon.h"
#include "WildSpawnPointMapIcon.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UWildSpawnPointMapIcon : public UMapIcon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* IconButton;
    
public:
    UWildSpawnPointMapIcon();

};

