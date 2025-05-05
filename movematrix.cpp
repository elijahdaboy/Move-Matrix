#include <iostream>
#include <vector>

// vector must be a square
class MoveVector{
    public:
        std::vector<std::vector<int>> moveMatrixUpFunc(std::vector<std::vector<int>> vectorMain, int vectorMainHeight, int vectorMainLength){
            for (int i = 0; i < vectorMainHeight - 1; i++){
                for (int j = 0; j < vectorMainLength; j++){
                    if (i == vectorMainHeight){
                        std::swap(vectorMain[i][j], vectorMain[0][j]);
                    } else{
                        std::swap(vectorMain[i][j], vectorMain[i + 1][j]);
                    }
                }
            }
            
            return vectorMain;
        }
    
        std::vector<std::vector<int>> moveMatrixDownFunc(std::vector<std::vector<int>> vectorMain, int vectorMainHeight, int vectorMainLength){
            
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
    
    while (true){
        std::cout << "What would you like to do?\n1: Move vector up\n2: Move vector down\n(1, 2): ";
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
        } else{
            std::cout << "\nInvalid input. Please enter 1-2\n\n";
        }
    }
    
    return 0;
}
