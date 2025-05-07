#include <iostream>
#include <vector>

// vector must have even rows
class MoveVector{
    public:
        std::vector<std::vector<int>> moveMatrixUpFunc(std::vector<std::vector<int>> vectorMain, int vectorMainHeight, int vectorMainLength){
            for (int i = 0; i < vectorMainHeight - 1; i++){
                if (i != 0){
                    std::swap(vectorMain[i], vectorMain[i - 1]);
                } else{
                    std::swap(vectorMain[0], vectorMain[vectorMainHeight - 1]);
                }
            }
            
            return vectorMain;
        }
    
        std::vector<std::vector<int>> moveMatrixDownFunc(std::vector<std::vector<int>> vectorMain, int vectorMainHeight, int vectorMainLength){
            for (int i = vectorMainHeight - 1; i > 0; i--){
                if (i != vectorMainHeight - 1){
                    std::swap(vectorMain[i], vectorMain[i + 1]);
                } else{
                    std::swap(vectorMain[i], vectorMain[0]);
                }
            }
            
            return vectorMain;
        }
        
        std::vector<std::vector<int>> moveMatrixLeftFunc(std::vector<std::vector<int>> vectorMain, int vectorMainHeight, int vectorMainLength){
            for (int i = 0; i < vectorMainHeight; i++){
                for (int j = 0; j < vectorMainLength - 1; j++){
                    if (j != 0){
                        std::swap(vectorMain[i][j], vectorMain[i][j - 1]);
                    } else{
                        std::swap(vectorMain[i][0], vectorMain[i][vectorMainLength - 1]);
                    }
                }
            }
            
            return vectorMain;
        }
        
        std::vector<std::vector<int>> moveMatrixRightFunc(std::vector<std::vector<int>> vectorMain, int vectorMainHeight, int vectorMainLength){
            
            return vectorMain;
        }
};

int main(){
    MoveVector MoveVectorObj;
    std::string currUserInput;
    std::vector<std::vector<int>> vectorMain = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int vectorMainHeight = vectorMain.size();
    int vectorMainLength = vectorMain[0].size();
    
    for (int i = 0; i < vectorMainHeight; i++){
        for (int j = 0; j < vectorMainLength; j++){
            std::cout << vectorMain[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    
    while (true){
        std::cout << "What would you like to do?\n1: Move vector up\n2: Move vector down\n3: Move vector left\n4: Move vector right\n(1, 2, 3, 4): ";
        std::cin >> currUserInput;
        
        if (currUserInput == "1"){
            std::cout << '\n';
            vectorMain = MoveVectorObj.moveMatrixUpFunc(vectorMain, vectorMainHeight, vectorMainLength);
            for (int i = 0; i < vectorMain.size(); i++){
                for (int j = 0; j < vectorMain[i].size(); j++){
                    std::cout << vectorMain[i][j] << ' ';
                }
                std::cout << '\n';
            }
            std::cout << '\n';
        } else if (currUserInput == "2"){
            std::cout << '\n';
            vectorMain = MoveVectorObj.moveMatrixDownFunc(vectorMain, vectorMainHeight, vectorMainLength);
            for (int i = 0; i < vectorMain.size(); i++){
                for (int j = 0; j < vectorMain[i].size(); j++){
                    std::cout << vectorMain[i][j] << ' ';
                }
                std::cout << '\n';
            }
            std::cout << '\n';
        } else if (currUserInput == "3"){
            std::cout << '\n';
            vectorMain = MoveVectorObj.moveMatrixLeftFunc(vectorMain, vectorMainHeight, vectorMainLength);
            for (int i = 0; i < vectorMain.size(); i++){
                for (int j = 0; j < vectorMain[i].size(); j++){
                    std::cout << vectorMain[i][j] << ' ';
                }
                std::cout << '\n';
            }
            std::cout << '\n';
        } else if (currUserInput == "4"){
            std::cout << '\n';
            vectorMain = MoveVectorObj.moveMatrixRightFunc(vectorMain, vectorMainHeight, vectorMainLength);
            for (int i = 0; i < vectorMain.size(); i++){
                for (int j = 0; j < vectorMain[i].size(); j++){
                    std::cout << vectorMain[i][j] << ' ';
                }
                std::cout << '\n';
            }
            std::cout << '\n';
        } else{
            std::cout << "\nInvalid input. Please enter 1-2\n\n";
        }
    }
    
    return 0;
}
