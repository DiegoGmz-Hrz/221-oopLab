#pragma once
#include "developed_lot.hpp"

namespace office{
    class Office: public developed_lot::DevelopedLot{
    private:
        int offices;
    public:
        Office(int, double, double, double, double, double, double);
    
        virtual ~Office();
    
        using developed_lot::DevelopedLot::value;
        double value() const;
    
    protected:
        using developed_lot::DevelopedLot::land_area;
        double floor_area_ratio() const;
    };
}