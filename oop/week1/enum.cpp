#include <iostream>


//generic enums' attributes are globally scoped
// their variables are treated as integers and
// start counting from 0 to n
// int num1 = Fruits::Apple; enums are automatically casted to int (implicit)
// int num2 = (int)Fruits::Tomato explicit casting
enum Fruits { 
    Apple = 1, //we can alocate specific numbers which updates the sequencing
    Tomato = 1, //if we hadn't said that Tomato is 1 it would have been 2
    Peach
}; // having 2 variables with the same values is fine 

//enum class is scoped and isn't global
//Vegetables Vegetables veggie = Vegetables::Carot - scope resolution
//we cannot implicitly convert them to int we always need to cast it (explicit)
enum class Vegetables { 
    Carot, Cauliflower
};

//shadowing
int main() { 
    int b = 5; 
    { 
        int b = 3;
        //in this scope b will be 3 because we use the 
        //value that is the most recent - shadowing
    }
}