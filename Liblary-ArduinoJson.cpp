//REG.B1/0619203007/KANDIKA RAMA  

#include <iostream>
#include <string>
#include "ArduinoJson.h"

using namespace std;

int main()
{
    StaticJsonDocument<512> MyJsonDoc;
   

    const char *s = "{\"Name\":{\"First\":\"kandika\", \"Last\":\"rama\"}, \"JUR\":\"Teknik Informatika\", \"DAT\":\"REG.B1/0619203007\"}";

    deserializeJson(MyJsonDoc, s);

    cout << "Data JSON:\n" << MyJsonDoc << endl <<  endl;
    cout << "  	First Name 	: " << MyJsonDoc["Name"]["First"] << endl;
    cout << " 	Last Name  	: " << MyJsonDoc["Name"]["Last"] << endl;
    cout << "	Jurusan     	: " << MyJsonDoc["JUR"] << endl;
    cout << "       			: " <<  MyJsonDoc["DAT"] <<endl;

    

    return EXIT_SUCCESS;
}
