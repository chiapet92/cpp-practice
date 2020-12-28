/*GOAL: Practice writing to the console and learn 
 **the variables types available in C++
 **Print the sizes of each variable to the console.
 **Print them in the following order:
 **int, short, long, char, float, double, bool
 */

 #include <iostream>
 int main()
 {
     using namespace std;
     cout<<"int size = "<<sizeof(int)<<"\n";
     cout<<"short size = "<<sizeof(short)<<"\n";
     cout<<"long size = "<<sizeof(long)<<"\n";
     cout<<"char size = "<<sizeof(char)<<"\n";
     cout<<"float size = "<<sizeof(float)<<"\n";
     cout<<"double size = "<<sizeof(double)<<"\n";
     cout<<"bool size = "<<sizeof(bool)<<"\n";
     return 0;
 }

 /**
 * The value of integer is 4
 * The value of short is 2
 * The value of long is 8
 * The value of char is 1
 * The value of float is 4
 * The value of double is 8
 * The value of bool is 1
 */