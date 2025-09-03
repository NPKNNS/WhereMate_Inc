#include "rapidjson/document.h"
#include <fstream>
#include <iostream>

using namespace std;
using namespace rapidjson;

int main()
{
    // Open the file
    ifstream file("database/storage.json");

    // Read the entire file into a string
    string json((istreambuf_iterator<char>(file)),
                istreambuf_iterator<char>());

    // Create a Document object 
      // to hold the JSON data
    Document doc;

    // Parse the JSON data
    doc.Parse(json.c_str());

    // Check for parse errors
    if (doc.HasParseError()) {
        cerr << "Error parsing JSON: "
             << doc.GetParseError() << endl;
        return 1;
    }

    // Now you can use the Document object to access the
    // JSON data
    return 0;
}