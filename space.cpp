#include <iostream> 

int main() { 

    double weight;
    int x;

    std::cout << "Enter your weight on earth: "; 
    std::cin >> weight; 

    std::cout << "\n Possible planets: 
    1. Venus
    2. Mercury
    3. Mars
    4. Jupiter
    5. Saturn
    6. Uranus
    7. Neptune"; 

    std::cout << "Which planet"; 
    std::cout << "are you visiting?"; 
    std::cin >> x; 

    if (x ==1)  {
        weight =  weight * 0.38;
    } 

    else if ( x == 2) { 

        weight = weight * 0.91; 
    } 

    else if (x ==3) {   

        weight = weight * 0.38; 
    }
    else if (x == 4){ 

       weight = weight * 2.34; 
    }
    else if (x == 5) {

        weight = weight * 1.06; 
        }
      
    
    else if (x == 6) { \
       weight = weight * 0.92;
    } 
    else if (x == 7) { 
       weight = weight * 1.19;
    } 

    std::cout << "\nYour weight:" << weight << "\n"; 

}
