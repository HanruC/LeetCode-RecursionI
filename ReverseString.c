void reverseString(char* s, int sSize){
    int start = 0; // 定义起始指针
    int end = sSize - 1; // 定义终止指针
    char temp; // 定义临时存储字符的变
    while (start < end) { // 当起始指针小于终止指针时
        temp = s[start]; // 将起始指针的字符存入临时变量
        s[start] = s[end]; // 将终止指针的字符存入起始指针
        s[end] = temp; // 将临时变量的字符存入终止指针
        start++; // 起始指针向后移动
        end--; // 终止指针向前移
    }
}