//
//  main.cpp
//  code_kata
//
//  Created by ebrain on 2020/02/21.
//  Copyright © 2020 ebrain. All rights reserved.
// https://projecteuler.net/problem=4

#include <iostream>
bool pal(int input);
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int num1 = 999;
    int num2 = 999;
    int max = 0;
    
    for(register int i = 0; i<999;i++){
        for(register int j = i; j<999; j++){
            if(pal((999-i)*(999-j)))
            {
                if(max<(999-i)*(999-j)){
                    max = (999-i)*(999-j);
                    num1 = 999-i; num2 = 999-j;
                    std::cout << max<<" "<<num1<< ", " << num2<<"\n";
                }
                
                break;
            }
        }
    }
    
    return 0;
}

bool pal(int input){
    int digit = 7;
    int power = 1000000;
    while(digit > 0 && input < power){
        digit--;
        power /=10;
    }
    int each[7];
    int temp = input;
    for(int i =1; i<=digit ; i++){
        each[i] = temp%10;
        temp = temp/10;
    }
    for(int i =1; i<=digit / 2 ; i++){
        if(each[i] != each[digit-i+1])
            return false;
    }
    return true;
}

