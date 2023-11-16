#include <iostream>

class MyClass {
private:
    int* data;
public:
    
    void initialize(int value) {
        data = new int;  
        *data = value;   
    }

    void display() {
        std::cout << "Data: " << *data << std::endl;
    }

   
    ~MyClass() {
        delete data;
    }


};

int main() {
    MyClass obj;
    obj.initialize(42);
    obj.display();

   
    return 0;
}
