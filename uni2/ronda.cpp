#include <iostream>

void ceout(int H, int M, int S){
    if (H >= 24)
    {
        H %= 24;
    }
      if (M >= 60)
    {
        M %= 60;
        H++; 
    }
      if (S >= 60)
    {
        S %= 60;
        M++;
    }
    if (H < 10)
    {
        std::cout << 0 << H << ":";
    }
    else 
    {
        std::cout << H << ":";
    }
    
  
    if (M < 10)
    {
        std::cout << 0 << M << ":";
    }
    else
    {
        std::cout << M << ":";
    }
    
  
    if (S < 10)
    {
        std::cout << 0 << S;
    }
    else
    {
        std::cout << S;
    }
    std::cout << std::endl;
}

void funchora(int H, int M, int S)
{
    H += 1;
    ceout(H, M, S);
    H -= 1;
    
    H += 2;
    M += 10;
    S += 30;
    ceout(H, M, S);
     H -= 2;
    M -= 10;
    S -= 30;
    
    H += 4;
    M += 40;
    S += 50;
    ceout(H, M, S);
     H -= 4;
    M -= 40;
    S -= 50;
    H += 12;
    M += 5;
    S += 5;
    ceout(H, M, S);
   
}

int main()
{
    int H, M, S;

    std::cin >> H >> M >> S;

    funchora(H, M, S);

    return 0;
}