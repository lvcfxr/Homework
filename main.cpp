#include <iostream>
#include <string>

class ElectronicDevice {
public:
    virtual bool power_on() {
        return true;
    }
};

class Phone : public ElectronicDevice {
    bool power_on() override {
        return true;
    }
};

class Tablet : public ElectronicDevice {
    bool power_on() override {
        return true;
    }
};

class Laptop : public ElectronicDevice {
    bool power_on() override {
        return true;
    }
};

class TV : public ElectronicDevice {
    bool power_on() override {
        return true;
    }
};

int main() {

    ElectronicDevice* phone = new Phone();
    ElectronicDevice* tablet = new Tablet();
    ElectronicDevice* laptop = new Laptop();
    ElectronicDevice* tv = new TV();

    std::cout << phone->power_on() << std::endl;
    std::cout << tablet->power_on() << std::endl;
    std::cout << laptop->power_on() << std::endl;
    std::cout << tv->power_on() << std::endl;

    return 0;
}
