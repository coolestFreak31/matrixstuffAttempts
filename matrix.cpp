#include <iostream>
#include <vector>
#define vecmat std::vector<std::vector<int>>

vecmat matsum(const vecmat &mat1, const vecmat &mat2)
{
    if(mat1.size() != mat2.size() || mat1[0].size() != mat2[0].size()) { return vecmat{}; }
    
    //ЗАПОМНИ МРАЗЬ!!!!!!!
    vecmat resmat(mat1.size(), std::vector<int>(mat2[0].size()));

    for(int i = 0; i < size(mat1); i++)
    {
        for(int j = 0; j < size(mat1[0]); j++)
        {
            resmat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return resmat;
}

vecmat matmul(const vecmat &mat1, const vecmat &mat2)
{
    if(mat1[0].size() != mat2.size()){ return vecmat{}; }
    
    vecmat resmat(mat1.size(), std::vector<int>(mat2[0].size()));

    for(int i = 0; i < size(mat1); ++i)
    {
        for(int j = 0; j < size(mat2[0]); ++j)
        {
            for(int k = 0; k < mat1[0].size(); ++k){ resmat[i][j] += mat1[i][k] * mat2[k][j]; }
        }
    }

    return resmat;

}

void printMat(vecmat mat)
{
    for(auto x : mat)
    {
        for(auto y : x)
        {
            std::cout << y << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    vecmat mat1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vecmat mat2 = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};
    vecmat mat3 = matsum(mat1, mat2);
    
    vecmat mat4 = matmul(mat1, mat2);

    printMat(mat3);
    printMat(mat4);
}