#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
        // we can also use this in place of above line code : cout<<v.at(i)<<" ";

    }
    cout<<endl;

}

int main(){
    vector<int> vec1;
    int element, size;
    cout<<"enter the size of your vector"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter an element to add to this vector:  ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vector<int> :: iterator iter=vec1.begin();
    vec1.insert(iter+1,5,566);
    display(vec1);




return 0;
}