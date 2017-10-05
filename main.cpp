/**
 * 判断回文序列
 */
#include <iostream>
#include <string>

using namespace std ;



void JudgePalindromic(int length, char *p){

    int m, n;
    if(length % 2 == 0){
        m = length / 2 ;
        for (int i = 0; i < m; i++) {
            if(*(p + i) == *(p + length - 1 - i)){
                continue ;
            } else{
                cout << "否" << endl ;
                exit(0) ;
            }
        }
        cout << "是"<< endl ;
    }
    else if(length % 2 == 1){
        m = (length + 1) / 2 ;
        for (int i = 0; i < m; i++) {
            if(*(p + m - 1 - i) == *(p + m - 1 + i)){
                continue ;
            }
            else{
                cout << "否" << endl ;
                exit(0) ;
            }
        }
        cout << "是"<< endl ;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    string str;
    cout << "input your string, please." << endl ;
    cin >> str ;
    int length = str.length() ;
    char *p = &str[0] ;
    int m  ;
    JudgePalindromic(length, p) ;

}
