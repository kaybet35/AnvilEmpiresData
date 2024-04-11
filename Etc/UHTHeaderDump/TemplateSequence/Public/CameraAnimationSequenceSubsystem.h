#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "CameraAnimationSequenceSubsystem.generated.h"

class UMovieSceneEntitySystemLinker;

UCLASS(Blueprintable)
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* Linker;
    
public:
    UCameraAnimationSequenceSubsystem();

};

