//Darshan Mistry:-
//pointer Arithmetic.

#include <bits/stdc++.h> 
using namespace std; 
void POINT()   
{ 
    //Declare an array 
    int v[3] = {10, 50, 75}; 
      
    //Declare pointer variable...
    int *ptr; 
      
    //Assign the address of v[0] to ptr 
    ptr = v; 
      
    for (int i = 0; i < 3; i++) 
        
    { 
            cout << "Address at a pt = " << ptr << "\n"; 
            cout << "Value at a *ptr = " << *ptr << "\n"; 
              
            // Increment pointer ptr by 1  
            ptr++; 
    } 
} 
  
//Driver program 
int main() 
{ 
    POINT(); 
} 
