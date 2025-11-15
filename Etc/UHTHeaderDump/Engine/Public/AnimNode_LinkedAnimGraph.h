#pragma once
#include "CoreMinimal.h"
#include "AnimNode_CustomProperty.h"
#include "PoseLink.h"
#include "Templates/SubclassOf.h"
#include "AnimNode_LinkedAnimGraph.generated.h"

class UAnimInstance;
class UBlendProfile;

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseLink> InputPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InputPoseNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> InstanceClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlendProfile* PendingBlendOutProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlendProfile* PendingBlendInProfile;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReceiveNotifiesFromLinkedInstances: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPropagateNotifiesToLinkedInstances: 1;
    
    FAnimNode_LinkedAnimGraph();
};

