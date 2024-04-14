#include "ItemCount.h"

FItemCount::FItemCount() {
    this->CodeName = NULL;
    this->CodeNameVisVar = 0;
    this->UnderlyingCodeName = NULL;
    this->UnderlyingCodeNameVisVar = 0;
    this->Durability = 0.00f;
    this->Count = 0;
    this->ItemFlags = 0;
    this->Payload = 0;
}

