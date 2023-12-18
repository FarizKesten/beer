#include "beer.hpp"


Beer::Beer() : _alcoholContents(5.0f) {}

float Beer::getAlcoholContent() const {
    return _alcoholContents;
}

void Beer::setAlcoholContent(float content) {
    this->_alcoholContents = content;
}
