#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AISense.h"
#include "AITouchEvent.h"
#include "AISense_Touch.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class AIMODULE_API UAISense_Touch : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAITouchEvent> RegisteredEvents;
    
    UAISense_Touch();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportTouchEvent(UObject* WorldContextObject, AActor* TouchReceiver, AActor* OtherActor, FVector Location);
    
};

