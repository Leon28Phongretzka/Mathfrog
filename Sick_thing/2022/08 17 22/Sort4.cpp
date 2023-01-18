#include <iostream>
#include <algorithm>
using namespace std;
struct person 
{
    string name;
    int age;
    // Constructor for the struct
    person(string input_name, int input_age)
    {
        name=input_name;
        age=input_age;
    }
};
bool compare_person(const person &person1, const person &person2)
{
    if(person2.age > person1.age)
    return 1;
    if(person2.age == person1.age)
    {
        if(person2.name > person1.name)
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    person arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name >> arr[i].age;
    }
    //person arr[] = {person("ram",   67), 
    //                person("kiran", 26), 
    //                person("raju",  14), 
    //                person("riya",  14), 
    //                person("chotu", 10)};
    //size_t len = sizeof(arr)/sizeof(arr[0]);
    // Calling sort() function with user defined compare function 'compare_person'
    sort(arr, arr+n, &compare_person);
    // Printing Output
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].age<<' '<<arr[i].name<<endl;
    }
}