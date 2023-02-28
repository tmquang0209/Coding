#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFile(string, string[], int[], int);
int movieNumber(string);
void output(string[], int[]);
void selectionSort(string[], int[], int n);
void displayTopFive(string[], int[]);

int main()
{
    int n = movieNumber("Phim.txt");
    string ten[n];
    int dt[n];
    readFile("Phim.txt", ten, dt, n);
    selectionSort(ten, dt, n);
    displayTopFive(ten, dt);
    // output(ten, dt);
    return 0;
}

void displayTopFive(string arrFilm[], int arrTotal[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arrFilm[i] << "\t" << arrTotal[i] << endl;
    }
}

void selectionSort(string listFilm[], int listTotal[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (listTotal[j] > listTotal[max])
            {
                max = j;
            }
        }
        swap(listFilm[i], listFilm[max]);
        swap(listTotal[i], listTotal[max]);
    }
}

void readFile(string fileName, string arr[], int dt[], int n)
{
    ifstream outputFile;
    outputFile.open(fileName);
    if (!outputFile)
    {
        cout << "Khong mo duoc file" << endl;
        return;
    }
    string line;
    int i = 0,
        j = 0, k = 0;
    while (getline(outputFile, line))
    {
        if (i != 0 & i > n)
        {
            if (i % 2 != 0)
            {
                arr[j++] = line;
            }
            else
            {
                dt[k++] = stoi(line);
            }
        }
        i++;
    }
    outputFile.close();
}

int movieNumber(string fileName)
{
    ifstream outputFile;
    outputFile.open(fileName);
    if (!outputFile)
    {
        cout << "Khong mo duoc file" << endl;
        return 0;
    }
    int num;
    outputFile >> num;
    return num;
}

void output(string listFilm[], int listTotal[])
{
    for (int i = 0; i < movieNumber("Phim.txt"); i++)
    {
        cout << listFilm[i] << " : " << listTotal[i] << endl;
    }
}