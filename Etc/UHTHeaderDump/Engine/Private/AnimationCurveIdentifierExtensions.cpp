#include "AnimationCurveIdentifierExtensions.h"

UAnimationCurveIdentifierExtensions::UAnimationCurveIdentifierExtensions() {
}

bool UAnimationCurveIdentifierExtensions::IsValid(FAnimationCurveIdentifier& Identifier) {
    return false;
}

ERawCurveTrackTypes UAnimationCurveIdentifierExtensions::GetType(FAnimationCurveIdentifier& Identifier) {
    return ERawCurveTrackTypes::RCT_Float;
}

FName UAnimationCurveIdentifierExtensions::GetName(FAnimationCurveIdentifier& Identifier) {
    return NAME_None;
}


