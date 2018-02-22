#include <iostream>
#include <list>

using namespace std;
void num(){
double n;
cout<<"Enter num: ";
cin>>n;
list <double> numbers;
    numbers.push_front(2.2);
    numbers.push_front(1.1);
    numbers.push_back(3.3);
    numbers.push_back(4.4);
    list<double>::iterator it;
    it=numbers.begin();
    it++;
    it++;
    numbers.insert(it,n);
    it=numbers.begin();
    while(it!=numbers.end()){
        cout<<*it<<" ";
        it++;
    }
}
int main()
{
    num();

    return 0;
}
