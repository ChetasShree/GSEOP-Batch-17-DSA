#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    
    std::vector<int> int_vect;

    for(int i = 0; i < 10; i++)
        int_vect.push_back(i+1);

   auto itr = std::find(int_vect.begin(), int_vect.end(), 4);
   cout << *itr;

    return 0;
}

// sort vector

// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>

// using std::cin;
// using std::cout;
// using std::endl;
// using std::string;

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif // ONLINE_JUDGE
    
//     std::vector<int> int_vect;

//     for(int i = 10; i > 0; i--)
//         int_vect.push_back(i);

//     for(auto item: int_vect)
//         cout << item << " ";
//     cout << endl;

//     std::sort(int_vect.begin(), int_vect.end());
   
//     for(auto item: int_vect) {
//         cout << item << " ";
//     }

//     return 0;
// }