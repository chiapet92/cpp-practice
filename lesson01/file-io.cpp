/**
 * File IO Steps:
 * 1. include the <fstream> library
 * 2. create a stream (input, output, both)
 *  - ofstream myfile; (for writing to a file)
 *  - ifstream myfile; (for reading a file)
 *  - fstream myfile; (for reading and writing a file)
 * 3. open the file with myfile.open("filename")
 * 4. write or read the file.
 * 5. close the file with myfile.close();
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else
        cout << "Unable to open file for writing";

    //create an input stream to read the file
    ifstream myfileO("input.txt");
    //During the creation of ifstream, the file is opened.
    //So we do not have explicitly open the file.
    if (myfileO.is_open())
    {
        while (getline(myfileO, line))
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else
        cout << "Unable to open file for reading";

    return 0;
}
