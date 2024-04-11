#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneSectionChannelOverrideRegistry.generated.h"

class UMovieSceneChannelOverrideContainer;

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneSectionChannelOverrideRegistry : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMovieSceneChannelOverrideContainer*> Overrides;
    
public:
    UMovieSceneSectionChannelOverrideRegistry();

};

