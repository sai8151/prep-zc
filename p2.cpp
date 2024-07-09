#include <iostream>
#include <cstring>

void printWordPattern(const std::string &word)
{
    int n = word.size();
    char matrix[n][n];

    // Initialize the matrix with spaces
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            matrix[i][j] = ' ';
        }
    }

    // Populate the matrix with characters of the word
    for (int i = 0; i < n; ++i)
    {
        matrix[i][i] = word[i];
        matrix[i][n - i - 1] = word[i];
        printf("%d %d\n", (n - i - 1), i);
    }

    // Print the matrix
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::string word = "PROGRAM";
    printWordPattern(word);
    return 0;
}
