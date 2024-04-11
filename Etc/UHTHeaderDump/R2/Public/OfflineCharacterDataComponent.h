#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "OfflineCharacterDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UOfflineCharacterDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OwnerPlayerName;
    
    UOfflineCharacterDataComponent(const FObjectInitializer& ObjectInitializer);

};

