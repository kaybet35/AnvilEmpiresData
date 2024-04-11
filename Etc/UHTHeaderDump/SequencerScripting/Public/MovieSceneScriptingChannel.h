#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneScriptingChannel.generated.h"

UCLASS(Abstract, Blueprintable)
class UMovieSceneScriptingChannel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChannelName;
    
    UMovieSceneScriptingChannel();

};

