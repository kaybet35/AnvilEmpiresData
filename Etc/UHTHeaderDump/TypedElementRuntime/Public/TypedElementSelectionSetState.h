#pragma once
#include "CoreMinimal.h"
#include "TypedElementSelectionSetState.generated.h"

class UTypedElementSelectionSet;

USTRUCT(BlueprintType)
struct FTypedElementSelectionSetState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTypedElementSelectionSet> CreatedFromSelectionSet;
    
public:
    TYPEDELEMENTRUNTIME_API FTypedElementSelectionSetState();
};

