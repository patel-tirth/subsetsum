// #include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include<string>
using namespace std;

// The vector v stores current subset.
void print(int arr[], int n, vector<int> v,
                       int sum)
{

int count=0;
unsigned int i =0;

string s1=" ";

string s2=" ";

// If remaining sum is 0, then print all    
   // elements of current subset.
   if (sum == 0) {
       for (auto x : v)

for(i=0;i<30;i++)

{

    s1=s1+to_string(v[i]); //it can be store the subset element in string
   cout << x <<" ";
   cout << endl;

}

s1=s1+s2;

++count; //which can be used to count the distinct subset

cout<<"count"<<count;
       return;
   }

// If no remaining elements,
   if (n == 0)
       return;

// do not include last element.
   // b) include last element in current subset.
   print(arr, n - 1, v, sum);
   v.push_back(arr[n - 1]);
   print(arr, n - 1, v, sum - arr[n - 1]);

// small(s1);
}

// void small(char s1[])

// {

// int len = s1.length();

//     int si = 0, l= 0;

//     int min_length = len, min_start_index = 0, max_length = 0, max_start_index = 0;

//     while (l<= len)

//     {

//         if (l < len && input[l] != ' ')

// l++;

// else {

//             // end of a word

// int curr_length = l- si;

// if (curr_length < min_length)

//             {

//                 min_length = curr_length;

//                 min_start_index = si;

//             }

//             l++;

//         si = l;

//         }

//     }

      

//     // store minimum

//     minWord = s1.substr(min_start_index, min_length);

// cout<<"minWord";

// return minWord;

// }

void Subsets(int arr[], int n, int sum)
{
   vector<int> v;
   print(arr, n, v, sum);
}

// Driver code
int main()
{
    int i ;
   int arr[7] ;
   int n=6;

cout<<"enter n elements";

for(i=0;i<n;i++){

cin>>arr[i];
}
   int sum = 13;
  
   Subsets(arr, n, sum);

   return 0;
}

