#include<iostream>

template<class T>
T* sum(T array[], int start_index, int stop_index, T value = 0) {
    for(int i = start_index; i <= stop_index; i++) {
        /*std::cout << "array[i] => " << array[i]
                << ", value => " << value; */
        value.set(value + array[i]);

        //std::cout << ", result => " << value << "\n";
    }
    return new T(value);
}
class Integer {
    private:
    int data;
    public:
    Integer(const Integer& copy) {
        data = copy.data;
    }
    Integer(int value) {
        data = value;
    }
    Integer():data(0) {}
    int operator+(const Integer& temp) {
        return data+temp.data;
    }
    void set(int data) {
        this->data = data;
    }
    friend std::ostream& operator<<(std::ostream&, Integer&);
    friend std::istream& operator>>(std::istream&, Integer&);
};
std::ostream& operator << (std::ostream& out, Integer& integer) {
    out << integer.data;
    return out;
}
std::istream& operator>>(std::istream& in, Integer& integer) {
    in >> integer.data;
    return in;
}

int main() {
    int N;
    std::cout << "Enter the array size: ";
    std::cin >> N;
    Integer array[N];
    std::cout << "Enter the array elements\n";
    for(int i = 0; i < N; i++) {
        std::cin >> array[i];
    }
    int start_index, stop_index;
    Integer initial_value;
    Integer* result;
    std::cout << "Enter the start index, stop_index: ";
    std::cin >> start_index >> stop_index;
    if(!(start_index < stop_index && start_index >=0 && stop_index < N)) {
            std::cout << "invalid indexing...\n";
            return 0;
    }
    std::cout << "Did you want to have an initial value? y/n: ";
    char choice;
    std::cin >> choice;
    if(choice == 'Y' || choice == 'y') {
        std::cout << "Enter the initial value: ";
        std::cin >> initial_value;
        
        result = sum(array, start_index, stop_index, initial_value);
    } else {
        result = sum(array, start_index, stop_index);
    }
    std::cout << "Sum of the array: " << *(result) << "\n";
    delete result;
}