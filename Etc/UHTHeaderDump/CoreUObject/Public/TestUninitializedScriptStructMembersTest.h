#pragma once
#include "CoreMinimal.h"
#include "TestUninitializedScriptStructMembersTest.generated.h"

class UObject;

USTRUCT(BlueprintType, NoExport)
struct FTestUninitializedScriptStructMembersTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* UninitializedObjectReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* InitializedObjectReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UnusedValue;
    
    COREUOBJECT_API FTestUninitializedScriptStructMembersTest();
};

