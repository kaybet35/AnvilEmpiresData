#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "TeamDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UTeamDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamID;
    
    UTeamDataComponent(const FObjectInitializer& ObjectInitializer);

};

