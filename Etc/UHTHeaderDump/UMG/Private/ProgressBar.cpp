#include "ProgressBar.h"

UProgressBar::UProgressBar() {
    this->Percent = 0.00f;
    this->BarFillType = EProgressBarFillType::LeftToRight;
    this->BarFillStyle = EProgressBarFillStyle::Mask;
    this->bIsMarquee = false;
}

void UProgressBar::SetPercent(float InPercent) {
}

void UProgressBar::SetIsMarquee(bool InbIsMarquee) {
}

void UProgressBar::SetFillColorAndOpacity(FLinearColor InColor) {
}


