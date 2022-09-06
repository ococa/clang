## 字符串
1. 在c语言中字符串指以0（整数0）结尾的一串字符.
    - 0和'\0' 都可以 但是'0'不行
2. 0标志字符串的结束，但它不是字符串的一部分，计算字符串长度的时候不包括这个0
3. 字符串以数组的形式存在，以数组或者指针的形式访问
    - 一般是以指针的方式访问
4. string.h里面有很多处理字符串的函数
```
// 字符串的定义
// 1. 不可修改，字符串保存在代码段（未确定位置）相同内容重复定义 指向位置相同
char *str = "hello";

// 2. 可修改，字符串会保存在当前内存位置，会自动被回收
char word[] = "hello"; 

char line[10] = "hello";
```

字符串的存储形式是数组


```
// 字符数组
char c[] = {'a', 'b', 'c',};

// 字符串实际存储方式
char word[] = {'H', 'e', 'l', 'l', 'o', '!', 0 };
```



## 字符串的操作

### 字符串的定义选择
1. 如果要处理一个字符串，使用数组
2. 如果要定义一个字符串，使用指针

### 字符串常见错误
1. 使用指定义字符串没有初始化
```
char *string;
scanf("%s", string); // 可能会出错，因为string没有初始化。string只是一个简单的指针变量

```
### 字符串赋值
```
char *t = "title";
char *s;
s = t;
// 没有产生新的字符串，只是将s指向t的地址
```


### 字符串输入输出 "%s"
```
char word[8];
scanf("%s", word);
printf("%s", word);
// scanf读入一个单词（到tab，空格或者回车为止）
// scanf是不安全的，因为它不知道数组有多大
// scanf("%3s", word); // 最多读入三个数字
```

### 字符串数组

1. char ** a; 
    - a是一个指针 指向另一个指针，那个指针指向一个字符（串）
2. char a[][10];
    - 二维数组变量

```
// 写法1，列必须指定长度，限制了后面字符串长度
// 第一种写法声明了实际的内存地址，a[n] 的每一项都是10个连续的内存空间
char a[][10] = {
    "hello",
    "world",
};


// 写法2 -> a[n] => char*
// 第二种写法仅仅在a[n]的每一项中保存了char*所指的内存空间地址
char *a[] = {
    "hello",
    "jlasjdlfkja",
};

```

## 关于shell

在shell中输入文字，在按下回车之前，处于行编辑的状态
这些字都没有被送到自己的c程序中去

## 字符串的函数<string.h>

### putchar/getchar

读入获取单个char
```
int ch;

// windows下 ctrl + z == EOF
// unix   下 ctrl + d == EOF
while ((ch = getchar()) != EOF) {
    printf("==");
    putchar(ch);
}
// INPUT:asd
// OUTPUT:== ==a==s==d==
```

### strlen (str length)
1. 获取字符串的长度
size_t strlen(const char *s);
### strcmp (str compare)
1. 比较字符串大小
0: s1 == s2 // => s1 = "sdf"; s2 = "sdf"
// 当不相等的时候给出的是s1 - s2 
1: s1 > s2
-1: s1 < s2
### strcpy (str copy)
// 从s2复制到s1
strcpy(s1, s2);
### strcat (str concat )
// 将s2连接到s1尾部
strcat(s1, s2);
### strchr (str find char)
// 返回字符串中对应字符的指针
```
char s[] = "attow";

char *p = strchr(s, 't'); // 获取attow中第一个t的指针
printf("%s\n", p); // output: "ttow";
char *p2 = strchr(p + 1, "t"); // 从p + 1位置开始继续查找

// 复制查找到后面的字符串
char *t = (char*)malloc(strlen(p) + 1);
strcpy(t, p);

free(t); // ****important***** 记得释放

```

```
// 套路
char s[] = "attow";

char *p = strchr(s, 'o'); // 获取attow中第一个t的指针
char temp = *p
*p = '\0';

// 复制查找到后面的字符串
char *t = (char*)malloc(strlen(s) + 1);
strcpy(t, p);
*p = temp;
free(t); // ****important***** 记得释放


```
### strrchr 从右开始查找

### strstr （str string）

### 