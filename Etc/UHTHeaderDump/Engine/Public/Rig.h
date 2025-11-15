#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Node.h"
#include "NodeMappingProviderInterface.h"
#include "TransformBase.h"
#include "Rig.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URig : public UObject, public INodeMappingProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTransformBase> TransformBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FNode> Nodes;
    
public:
    URig();


    // Fix for true pure virtual functions not being implemented
};

