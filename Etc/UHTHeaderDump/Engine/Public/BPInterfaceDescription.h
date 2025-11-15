#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BPInterfaceDescription.generated.h"

class IInterface;
class UInterface;
class UEdGraph;

USTRUCT(BlueprintType)
struct FBPInterfaceDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInterface> Interface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEdGraph*> Graphs;
    
    ENGINE_API FBPInterfaceDescription();
};

