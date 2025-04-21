#pragma once
#include "Office.hpp"

office::Office::Office(int oCount,double lat, double lon, double wid, double len, double area, double num_flr): developed_lot::DevelopedLot::DevelopedLot(lat, lon, wid, len, area, num_flr){
    this-> offices= oCount;
}

office::Office::~Office(){

}

double office::Office::value() const{
    return this->DevelopedLot::value() + 200 * this->offices;
}