//
//  Tiffany Ngai
//  20900617
//  121 Review activity3
//
//  I hereby declare that this code, submitted for credit for the course SYDE121, is a product of my own efforts. This coded solution has not been plagiarized from other sources and has not been knowingly plagiarized by others.
//
//  Project: Comparing number, loops
//  Due Date: 5/10/2020

#include <iostream>
using namespace std;

//function that chcek if the integer is greater than 5000, its third digit from the right is three, if its second digit from the right is even and if the number is divisible by 100
//Input: target = the number to be checked
//Output: show the result of whether the number meets the requirements above
void comparing_number() {
    
    //declare variable
    int target;
    
    //allow user to input the number
    cout << "Input a number: ";
    cin >> target;
    
    //echoing
    cout << "The input number is "
         << target
         << endl;
    
    //compare the number with the requirements
    bool is_valid = target > 5000 && target % 1000 - target % 100 == 300;
    is_valid = is_valid && (target % 100 - target % 10) / 10 % 2 == 0;
    is_valid = is_valid && target % 10 == 0;
    
    //output result
    if (is_valid) {
        cout << "The target is valid\n";
    }
    else {
        cout << "The target is invalid\n";
    }
    
    
}

//function that the entry is incremented three from 0 to 1000, if entry is divisible by (2 or 3) and 11, the value is outputted. After five values are outputted, the loop exits
//output: entry = integers that are divisible by 2 or 3 and 11
void forloop() {
    
    //declare variables
    int entry, valid_count;
    bool continue_loop = true, is_valid_entry;
    
    for (entry = 0, valid_count = 0; continue_loop && entry <= 10000; entry = entry + 3) {
        
        //check if the entry is divisible by 2 or 3 and 11
        is_valid_entry = entry % 2 == 0 or entry % 3 == 0;
        is_valid_entry = is_valid_entry && entry % 11 == 0;
        
        //output the number if it meets the criteria
        if (is_valid_entry) {
            cout << entry
                 << endl;
            valid_count++;
        }
        
        //check to see if the loop have to continue
        continue_loop = valid_count < 5;
    }
    
    
}

//function that continues if the entered value is not inside the specifies range
void do_whileloop() {
    
    //declare variables
    int entry;
    bool continue_Loop = true;
    
    do {
         //get input from user
           cout << "Enter a number: ";
           cin >> entry;
           
           //echoing
           cout << "The input number is "
                << entry
                << endl;
               
               continue_Loop = entry < 1 or entry > 10;
        
    } while (continue_Loop);
    
}




int main() {

    comparing_number();
    forloop();
    do_whileloop();
    
    return 0;
}
