#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EAnvilSignPostVisualType.h"
#include "EAnvilVoteType.h"
#include "SignPostDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API USignPostDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilSignPostVisualType VisualType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilVoteType ClientVote;
    
    USignPostDataComponent(const FObjectInitializer& ObjectInitializer);

};

