#include <iostream>
class Vehicle {
   protected:
    double mileage, price;
};
class Car : public Vehicle {
   private:
    double cost;
    int yrs;
    int capacity;
    std::string fuel_type;

   protected:
    friend void display(Car *);
    friend void get(Car *);
};
class Bike : public Vehicle {
   private:
    int cylinders;
    int gears;
    std::string cooling_type;
    std::string wheel_type;
    double tank_size;

   protected:
    friend void display(Bike *);
    friend void get(Bike *);
};
class Audi : public Car {
   private:
    std::string model_type;

   public:
    void print() {
        std::cout << "Audi Details" << std::endl
                  << "Model Type => " << model_type << std::endl;
        display(this);
    }
    void input() {
        std::cout << "Enter Audi details" << std::endl
                  << "Model type, Ownership Cost, Years, Capacity, Fuel Type, "
                     "Mileage, Price"
                  << std::endl;
        std::cin >> model_type;
        get(this);
    }
    friend void get(const char *, Car *);
};
class Ford : public Car {
   private:
    std::string model_type;

   public:
    void print() {
        std::cout << "Ford Details" << std::endl
                  << "Model Type => " << model_type << std::endl;
        display(this);
    }
    void input() {
        std::cout << "Enter Ford details" << std::endl
                  << "Model type, Ownership Cost, Years, Capacity, Fuel Type, "
                     "Mileage, Price"
                  << std::endl;
        std::cin >> model_type;
        get(this);
    }
    friend void get(const char *, Car *);
};
class Bajaj : public Bike {
   private:
    std::string make_type;

   public:
    void print() {
        std::cout << "Bajaj Details" << std::endl
                  << "Make Type => " << make_type << std::endl;
        display(this);
    }
    void input() {
        std::cout << "Enter Bajaj details" << std::endl
                  << "Make type, Cyclinders, Gears, Cooling type, Wheel Type, "
                     "Tank size, Mileage, Price"
                  << std::endl;
        std::cin >> make_type;
        get(this);
    }
};
class Tvs : public Bike {
   private:
    std::string make_type;

   public:
    void print() {
        std::cout << "TVS Details" << std::endl
                  << "Make Type => " << make_type << std::endl;
        display(this);
    }
    void input() {
        std::cout << "Enter TVS details" << std::endl
                  << "Make type, Cyclinders, Gears, Cooling type, Wheel Type, "
                     "Tank size, Mileage, Price"
                  << std::endl;
        std::cin >> make_type;
        get(this);
    }
    friend void get(const char *, Car *);
};
void display(Car *c) {
    std::cout << "Ownership Cost => " << c->cost << std::endl
              << "Yrs => " << c->yrs << std::endl
              << "Seating capacity => " << c->capacity << std::endl
              << "Fuel Type => " << c->fuel_type << std::endl
              << "Mileage => " << c->mileage << std::endl
              << "Price => " << c->price << std::endl;
}
void display(Bike *b) {
    std::cout << "Cylinders => " << b->cylinders << std::endl
              << "Gears => " << b->gears << std::endl
              << "Cooling Type => " << b->cooling_type << std::endl
              << "Wheel Type => " << b->wheel_type << std::endl
              << "Tank Size => " << b->tank_size << std::endl
              << "Mileage => " << b->mileage << std::endl
              << "Price => " << b->price << std::endl;
}
void get(Car *c) {
    std::cin >> c->cost >> c->yrs >> c->capacity >> c->fuel_type >>
        c->mileage >> c->price;
}
void get(Bike *b) {
    std::cin >> b->cylinders >> b->gears >> b->cooling_type >> b->wheel_type >>
        b->tank_size >> b->mileage >> b->price;
}
int main() {
    Ford ford;
    Audi audi;
    Bajaj bajaj;
    Tvs tvs;

    ford.input();
    audi.input();
    bajaj.input();
    tvs.input();

    std::cout << "========== PRINTING ==========" << std::endl;

    ford.print();

    std::cout << "========== PRINTING ==========" << std::endl;

    audi.print();

    std::cout << "========== PRINTING ==========" << std::endl;

    bajaj.print();

    std::cout << "========== PRINTING ==========" << std::endl;

    tvs.print();
}