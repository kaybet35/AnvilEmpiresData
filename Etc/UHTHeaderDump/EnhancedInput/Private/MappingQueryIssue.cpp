#include "MappingQueryIssue.h"

FMappingQueryIssue::FMappingQueryIssue() {
    this->Issue = EMappingQueryIssue::NoIssue;
    this->BlockingContext = NULL;
    this->BlockingAction = NULL;
}

