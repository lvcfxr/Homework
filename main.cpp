#include <iostream>
#include <string>

struct vehicle {
    int length;
    int clearance;
    int engine_vol;
    int engine_pow;
    int wheel_diameter;
    std::string color;
    std::string box_type;
};

void setVehicle(vehicle& v, int length, int clearance, int engine_vol, int engine_pow, int wheel_diameter, const std::string& color, const std::string& box_type) {
    v.length = length;
    v.clearance = clearance;
    v.engine_vol = engine_vol;
    v.engine_pow = engine_pow;
    v.wheel_diameter = wheel_diameter;
    v.color = color;
    v.box_type = box_type;
}

void displayVehicle(const vehicle& v) {
    std::cout << "Vehicle Details:" << std::endl;
    std::cout << "Length: " << v.length << " mm" << std::endl;
    std::cout << "Clearance: " << v.clearance << " mm" << std::endl;
    std::cout << "Engine Volume: " << v.engine_vol << " cc" << std::endl;
    std::cout << "Engine Power: " << v.engine_pow << " hp" << std::endl;
    std::cout << "Wheel Diameter: " << v.wheel_diameter << " inches" << std::endl;
    std::cout << "Color: " << v.color << std::endl;
    std::cout << "Transmission: " << v.box_type << std::endl;
}

int getLength(const vehicle& v) {
    return v.length;
}

std::string getColor(const vehicle& v) {
    return v.color;
}

int main() {
    vehicle myCar;

    setVehicle(myCar, 4500, 200, 2000, 150, 17, "Red", "Automatic");
    displayVehicle(myCar);

    int length = getLength(myCar);
    std::cout << "Vehicle length: " << length << " mm" << std::endl;

    std::string color = getColor(myCar);
    std::cout << "Vehicle color: " << color << std::endl;

    return 0;
}
