#include<iostream>
#include<stack>
using namespace std;
#define N 10
//逆波兰表达式类型自定义
typedef struct rpn_node{
    bool tag;       //ture:表示元素为操作数，false：表示为运算符
    union{
        int v;      //操作数
        char op;    //运算符
    }data;//联合体
}rpn[];

//基础计算函数，用于返回表达式v1 op v2的计算结果
double cal(double v1,char op,double v2){
    switch(op){
        case '+': return v1+v2;
        case '-': return v1-v2;
        case '*': return v1*v2;
        case '/': return 1.0*v1/v2;
    }
}

//计算具有n项的逆波兰表达式postfix的表达式的值，表达式结果作为返回值double类型的
double calcuate(rpn_node postfix[], int n){
    double v1,v2;
    int i;
    stack<double>stk;
    for(i=0;i<n;i++){       //对n项一个个处理
    if(postfix[i].tag)
        stk.push(postfix[i].data.v);    //当前项为操作数，直接入栈
    else{                               //当前项为运算符，从栈中取出两项做运算
        v1=stk.top(),stk.pop();
        v2=stk.top(),stk.pop();
        stk.push(cal(v2,postfix[i].data.op,v1));
    }
    }
    return stk.top();
}

int main(){
    rpn_node a[] = {
    {true, {46}}, {true, {2}}, {false, {'/'}},
    {true, {32}}, {true, {5}}, {true, {17}},
    {false, {'-'}}, {false, {'*'}}, {false, {'+'}}
};


    cout<<endl;
    cout<<"结果为:"<<calcuate(a,9);
    return 0;
}




















