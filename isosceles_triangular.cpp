#include <iostream>

int make_triangular(int height){
  for (int i = 1; i < (height + 1); i++){
        std::string str(i, '*');
        std::cout << str << std::endl;
  }

  for (int i = 1; i < (height + 1); i++){
        std::string str((height-i), '*');
        std::cout << str << std::endl;
  }

return 0;
};


int main(){
  int height;
  std::cout << "Enter your triangular's height: " << std::endl;
  std::cin >> height;
  std::cout << "Your triangular is: " << '\n' << make_triangular(height) << std::endl;

  return 0;
}
