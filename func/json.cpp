#include "../header/json.h"
#include <fstream>

string PATH="example/data.json";

void getData(json &Data,string key){
    //get data
    ifstream file(PATH);
    json j = json::parse(file);
    file.close();

    Data = j[key];
}

void getAllData(json &Data){
    ifstream file(PATH);
    json j = json::parse(file);
    file.close();
    
    Data = j;
}

void setData(json &Data,string key){
    json all;
    getAllData(all);
    ofstream file(PATH);
    all[key]=Data;

    file<<setw(4)<<all;
}