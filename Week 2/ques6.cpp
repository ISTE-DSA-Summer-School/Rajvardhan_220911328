#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int starting_index = 0,current_index = 0 ,end_index = 0;
    string s1;
    getline(cin,s1);
    int len = s1.length();
    int substr_start_index = 0;
    int max_length = 0; 
    while(end_index<len)
    {
        if(end_index<len && s1[end_index] != ' ')
        {
            end_index++;
        }
        else
        {
            int current_length = end_index - starting_index;
            if(current_length>=max_length)
            {
                max_length = current_length;
                substr_start_index = starting_index;
            }
        }
        end_index++;
        starting_index = end_index;
    }
    cout<<max_length<<endl;
    cout<<s1.substr(substr_start_index,max_length);

}