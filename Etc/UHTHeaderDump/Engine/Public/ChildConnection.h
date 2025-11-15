#pragma once
#include "CoreMinimal.h"
#include "NetConnection.h"
#include "ChildConnection.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UChildConnection : public UNetConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNetConnection* Parent;
    
    UChildConnection();

};

