#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MapEditorNote.generated.h"

class UTextRenderComponent;

UCLASS(Blueprintable)
class ANVIL_API AMapEditorNote : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* NoteTextComponent;
    
public:
    AMapEditorNote(const FObjectInitializer& ObjectInitializer);

};

