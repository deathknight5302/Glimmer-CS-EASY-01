# 1、
+ 高级计算机语言  
    + 优点：形式上与人的思维接近，便于编写程序，便于阅读和维护，便于移植和扩充，便于与自然语言混合编程   
    + 缺点：执行效率低，不适合编写系统软件
+ 低级计算机语言  
    + 优点：执行效率高，适合编写系统软件  
    + 缺点：形式上与人的思维不接近，编写程序困难，难以阅读和维护，难以移植和扩充，难以与自然语言混合编程  
+ 个人偏好  
    + 高级计算机语言：平时编写程序用高级计算机语言较多  
# 2、  
①#include叫做文件包含命令，用来引入对应的头文件（.h文件），stdio.h就是标准输入输出头文件  
②无意义  
③int main() 函数是程序的入口，一个程序有且仅有一个main函数，main函数的返回值是int型，前大括号表示main函数开始   
④printf() 函数是格式化输出函数，输出Hello,world!  
⑤返回0到main函数，表示程序正常结束  
⑥后大括号，表示main函数结束  
删除第***二***行不会影响运行结果  
# 4、  
+ 存储整数
+ 因为int需要返回值(0),用于表示代码运行成功  
# 5、  
将"Hello,world!"改为"Hello glimmer!"  
[![pAJqj0I.png](https://s21.ax1x.com/2024/10/10/pAJqj0I.png)](https://imgse.com/i/pAJqj0I)
#include<stdio.h>
int main(){
    int code;
    printf("Show me your code,please.");
    while(1){
        scanf("%d",&code);
        if(code>=100000&&code<=999999){
        printf("I am super hacker!");
        return 0;
        }else{
            printf("Fake code!");
        }
    }
    return 0;
}
