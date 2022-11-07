#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

int main()
{
    int x, y;
    int pgcbVal;
    std::string row, col;
    std::string path;

    std::cout << "Enter image path: ";
    std::cin >> path;

    std::fstream imageFile(path);

    if (imageFile.is_open())
    {
        getline(imageFile, row);
        getline(imageFile, col);

        int image[stoi(row)][stoi(col)];
        int pgcb[stoi(row)][stoi(col)];

        memset(pgcb, 0, sizeof pgcb);

        std::cout
            << "Enter coordinate x of pixel in range [0, " << row << "]: ";
        std::cin >> x;
        std::cout
            << "Enter coordinate y of pixel in range [0, " << col << "]: ";
        std::cin >> y;

        for (size_t i = 0; i < stoi(row); i++)
        {
            for (size_t j = 0; j < stoi(col); j++)
            {
                imageFile >> image[i][j];
            }
        }

        /* if (image[0][0] == 1)
        {
            pgcb[0][0] = 0;
        }
        else
        {
            pgcb[0][0] = 1;
        }

        for (int i = 1; i < stoi(row); i++)
        {
            for (int j = 1; j < stoi(col); j++)
            {
                if (image[i][j] == 1)
                {
                    pgcb[i][j] = 0;
                }
                else
                {
                    pgcb[i][j] =
                        1 + std::min(std::min(
                                         pgcb[i - 1][j],
                                         pgcb[i - 1][j - 1]),
                                     pgcb[i - 1][j]);
                }
            }
        }

        pgcbVal = pgcb[x][y];

        std::cout << "The pgcb of image is: "
                  << pgcbVal << std::endl; */

        std::cout << image[0][0] << std::endl;
    }

    imageFile.close();

    return 0;
}