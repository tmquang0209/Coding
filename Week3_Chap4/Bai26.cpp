#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    string name, describe;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your describe: ";
    getline(cin, describe);

    ofstream fileHTML("personal.html");
    fileHTML << "<!DOCTYPE html>\n"
             << "<head>\n"
             << "</head>\n"
             << "<body>"
             << "<center><h1>" << name << "</h1></center>\n"
             << "<hr />\n"
             << describe << endl
             << "<hr />\n"
             << "</body></html>";
    fileHTML.close();
}