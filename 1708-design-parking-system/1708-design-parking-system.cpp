class ParkingSystem {
public:
    int capacity_b;
    int capacity_m;
    int capacity_s;
    int size_b;
    int size_m;
    int size_s;
    ParkingSystem(int big, int medium, int small) {
        capacity_b=big;
        capacity_m=medium;
        capacity_s=small;
        size_b=0;
        size_m=0;
        size_s=0;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1:
                if(size_b<capacity_b){
                    size_b++;
                    return true;
                }
                return false;
            case 2:
                if(size_m<capacity_m){
                    size_m++;
                    return true;
                }
                return false;
            case 3:
                if(size_s<capacity_s){
                    size_s++;
                    return true;
                }
                return false;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */