#include<iostream>
#include<vector>
using namespace std;

int main(){
    // ** Arrays **
    int arr[] = {4,6};
    cout<<"Size of array : "<< sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"Element at position 3 :"<<arr[2]<<endl; // segmentation fault or garbage value
    
    int arr2[6];
    cout<<"Element at position 2 :"<<arr2[1]<<endl; // segmentation fault or garbage value
    
    int arr3[4] = {3};
    cout<<"Element at position 2 :"<<arr3[1]<<endl; // get 0 as it's partially initilize
    
    int arr4[4]{5,2,1};
    cout<<"Element at position 2 :"<<arr4[3]<<endl; // get 0 as it's partially initilize

    // ** Vectors **
    vector<int>myVector{4,5,6};
    cout<<"Vector print :"<<myVector[0]<<endl;

    vector<int>myVector2(4, 14); // (x,y) x - number of elements , y - element value

    for(auto i: myVector2){ // for each loop
        cout<<"Vector Values:"<<i<<endl;
    }

    vector<int>myVector3{4};

    myVector3.push_back(9); // add element at last
    cout<<"vector after push :"<<myVector3[1]<<endl;
    
    myVector3.pop_back(); // remove last element
    cout<<"vector after pop :"<<myVector3[1]<<endl;

    myVector3.push_back(19); // add element at last
    cout<<"vector after push again :"<<myVector3[1]<<endl;

    cout<<"Vector size :"<<myVector3.size()<<endl; // give vector size

    // ** Multidimensional Arrays **
    int multiArr[3][2] = {2,4,3,6,4,8};
    cout<<"At row 1 column 1 :"<<multiArr[0][0]<<endl;
    cout<<"At row 3 column 2 :"<<multiArr[2][1]<<endl;

    int multiArr2[3][2] = {{2,4},{3,6},{4,8}};
    cout<<"At row 1 column 1 :"<<multiArr2[0][0]<<endl;
    cout<<"At row 3 column 2 :"<<multiArr2[2][1]<<endl;

    // ** Example Output **
    /*
            Size of array : 2
            Element at position 3 :0
            Element at position 2 :0
            Element at position 2 :0
            Element at position 2 :0
            Vector print :4
            Vector Values:14
            Vector Values:14
            Vector Values:14
            Vector Values:14
            vector after push :9
            vector after pop :9
            vector after push again :19
            Vector size :2
            At row 1 column 1 :2
            At row 3 column 2 :8
            At row 1 column 1 :2
            At row 3 column 2 :8
    */

    return 0;
}