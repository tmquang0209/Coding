#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void readFile(string fileName, vector<int> &);
void displayEvenNumber(vector<int>);

int main()
{
    vector<int> numbers;
    readFile("SoNguyen.txt", numbers);
    displayEvenNumber(numbers);
    return 0;
}

void displayEvenNumber(vector<int> numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
            cout << numbers[i] << " ";
    }
    cout << endl;
}

void readFile(string fileName, vector<int> &arr)
{
    ifstream outputFile;
    outputFile.open(fileName);
    if (!outputFile)
    {
        cout << "Khong mo duoc file" << endl;
        return;
    }
    int num;
    while (outputFile >> num)
    {
        arr.push_back(num);
    }
}