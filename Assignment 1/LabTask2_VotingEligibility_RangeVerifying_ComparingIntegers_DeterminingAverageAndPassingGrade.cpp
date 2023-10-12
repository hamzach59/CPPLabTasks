#include <iostream>
using namespace std;

// Lab Tasks
//
//1:Program to determine voting eligibility criteria
// int main ()
// {
//     float A;
//     cout<<"Age:";
//     cin>>A;
//     if (A>= 18)
//     {
//         cout<<"Eligible to vote"<<endl;
//     }
//     else
//     {
//         cout<<"Not Eligible"<<endl;
//     }
//     return 0;
// }
//
//2:Verify an integer withing range [10,50]
// int main ()
// {
//  float I;
//  cout<<"Integer:";
//  cin>>I;
//  if (I>=10 && I<=50)
//  {
//      cout<<"Integer lies within [10,50]";
//  }
//  else
//  {
//      cout<<"Integer does not lie within [10, 50]";
//  }
//  return 0;
// }
//
//3:Compare two integers to find maximumm value
//int main ()
//{
//    float A, B, C, D, E;
//    cout<<"Numbers:"<<endl;
//    cin>>A;
//    cin>>B;
//    if (A>B)
//    {
//        cout<<A<<" is greater than "<<B<<endl;
//    }
//    else if (A<B)
//    {
//     cout<<B<<" is greater than "<<A<<endl;  
//    }
//    else if (A==B)
//    {
//    cout<<A<<" is equal to "<<B<<endl;
//    }
//    C=A+B;
//    D=A*B;
//    if (C>D)
//    {
//     cout<<"Maximum value is " <<C<<endl;
// }
// else if (D>C)
// {
//     cout<<"Maximum value is "<<D<<endl;
// }
// return 0;
//}

//4:Calculate average of three exams to determine if its above passing grade i.e avg>=60
int main ()
{
 float A, B, C, D, E;
 cout<<"Respective scores out of 100"<<endl;
 cin>>A;
 cin>>B;
 cin>>C;
 D=A+B+C;
 E=D/3;
 cout<<"Average:"<<E<<endl;
 if (E>=60)
 {
 cout<<"PASSED";
 }
 else if (E<60)
 {
 cout<<"FAILED";
 }
 return 0;
}




