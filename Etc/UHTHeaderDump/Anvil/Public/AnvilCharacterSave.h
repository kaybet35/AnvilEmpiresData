#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "AnvilCharacterSave.generated.h"

UCLASS(Blueprintable)
class ANVIL_API UAnvilCharacterSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> FogOfWarData;
    
    UAnvilCharacterSave();

};

