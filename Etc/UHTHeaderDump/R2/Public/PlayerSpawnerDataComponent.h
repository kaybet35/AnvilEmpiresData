#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EAnvilFactionId.h"
#include "EAnvilSpawnType.h"
#include "PlayerSpawnerDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UPlayerSpawnerDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilSpawnType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilFactionId Faction;
    
    UPlayerSpawnerDataComponent(const FObjectInitializer& ObjectInitializer);

};

