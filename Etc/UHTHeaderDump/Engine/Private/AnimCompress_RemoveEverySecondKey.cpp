#include "AnimCompress_RemoveEverySecondKey.h"

UAnimCompress_RemoveEverySecondKey::UAnimCompress_RemoveEverySecondKey() {
    this->Description = TEXT("Remove Every Second Key");
    this->MinKeys = 10;
    this->bStartAtSecondKey = false;
}


