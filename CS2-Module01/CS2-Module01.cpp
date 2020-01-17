// CS2-Module01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>



using namespace std;

int main()
{
    // Create a string Vector called names
    vector<string> names;

    // Add at least 5 person names to the vector
    names.push_back("Peter");
    names.push_back("Tony");
    names.push_back("Bruce");
    names.push_back("Nick");
    names.push_back("Stephen");
    names.push_back("Steve");

    //  Use an array type index to display the third name in the vector
    cout << "The third name in the vector is: " << names[2] << endl << endl;

    // Use a for-range statement to display all the names
    cout << "Displaying the entire vector:" << endl;
    for (string val : names) {
        cout << val << endl;
    }
    cout << endl;

    // Display the sizeand capacity of the vector
    cout << "Vector Specs" << endl;
    cout << "-------------------" << endl;
    cout << "Size: " << names.size() << endl;
    cout << "Capacity: " << names.capacity() << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
