#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "WindDirectionalSource.generated.h"

class UWindDirectionalSourceComponent;

UCLASS(Blueprintable)
class ENGINE_API AWindDirectionalSource : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWindDirectionalSourceComponent* Component;
    
public:
    AWindDirectionalSource(const FObjectInitializer& ObjectInitializer);

};

