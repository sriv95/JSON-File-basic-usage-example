#include "header/json.h"
#include <iostream>

int main() {
    json Menus;

    getData(Menus,"Menus");

    cout<<"Source: "<<endl;
    //Print In single Line
    // cout<<Menus<<endl;

    //Default (giving null)
    // for (int i=0; Menus[i] != nullptr; i++) {
    //     cout<<Menus[i]<<endl;
    // }

    //using Iterator
    for (auto it = Menus.begin(); it != Menus.end(); ++it) {
        cout << *it << endl;
    }

    // Update Value
    Menus[0][1]=50;
    cout<<endl<<"Updated Value: "<<endl;
    for (auto it = Menus.begin(); it != Menus.end(); ++it) {
        cout << *it << endl;
    }
    cout<<Menus<<endl;

    setData(Menus, "Menus");

    return 0;
}