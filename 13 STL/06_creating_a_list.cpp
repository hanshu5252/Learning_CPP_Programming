#include<iostream>
#include<list>
using namespace std;
void display(list<int>  &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
}
int main(){
    list<int> list1;  // list of zero length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(15);
    list<int>:: iterator iter;
    iter=list1.begin();
    cout<<*iter<<" "<<endl;
    iter++;
    cout<<*iter<<" "<<endl;  
    display(list1);



return 0;
}