#include "nlohmann-json.hpp"
#include <string>

using json = nlohmann::json;

using namespace std;

void getData(json &,string);
void getAllData(json &,string);
void setData(json &,string);