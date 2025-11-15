#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComponentOverrideRecord.h"
#include "InheritableComponentHandler.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class ENGINE_API UInheritableComponentHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentOverrideRecord> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> UnnecessaryComponents;
    
public:
    UInheritableComponentHandler();

};

