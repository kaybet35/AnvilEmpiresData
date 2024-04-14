#include "MapEditorNote.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent

AMapEditorNote::AMapEditorNote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoteTextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("NoteTextComponent"));
}


