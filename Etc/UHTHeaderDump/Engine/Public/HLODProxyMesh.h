#pragma once
#include "CoreMinimal.h"
#include "HLODProxyMesh.generated.h"

class ALODActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FHLODProxyMesh {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<ALODActor> LODActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
public:
    ENGINE_API FHLODProxyMesh();
};

