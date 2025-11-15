#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LevelActorContainer.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultToInstanced, MinimalAPI)
class ULevelActorContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    ULevelActorContainer();

};

