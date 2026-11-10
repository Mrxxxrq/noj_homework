# 关于035的思考
题目 ![035](https://i-blog.csdnimg.cn/direct/f5b39ff71ff54da0beebe10196e304f0.png)
![035](https://i-blog.csdnimg.cn/direct/93e948a1e7ee446a9e15b93bba6aeacc.png)


1. ## 获取位数和数位
 首先学会了一种新的模板，可以同时获取各位数和位数
```
 while(N>0)
{
    sequence[len++] = N%10;
    N=N/10;
}
```
注意此处细节 len++ ，++后缀实现了先填空后”指针“后移的效果。


2. ## **逆序复制**
若我们用上述代码读取并存储了数*179*则在数组*sequcen[]*中为 971，所以我们需要逆序复制进新数组*index*
```
for(int i=len-1; i>=0; i--)
   {
        a[index++]=sequence[i];
        sum+=sequence[i];
    }
```
注意此处i = len-1,因为前面最后一轮填入后，len又++，所以此时len比数位多1





