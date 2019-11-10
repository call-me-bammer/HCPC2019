# HCPC 2019

* ## Write up Status

- [x] A.
- [ ] B.
- [ ] C.
- [ ] D.
- [ ] E.
- [ ] F.
- [ ] G.
- [ ] H.
- [ ] I.
- [ ] K.

* ## Reference Site

C/C++: http://cplusplus.com | https://en.cppreference.com/w/
\
JAVA: http://docs.oracle.com/javase/
\
Python: https://docs.python.org/3/

* ## Compile option / Language

>C++14

* 컴파일: g++ Main.cc -o Main -O2 -Wall -lm -static -std=gnu++14 -DONLINE_JUDGE -DBOJ
* 실행: ./Main
* 버전: g++ (GCC) 8.3.0
* BOJ 1000번 예제 소스

~~~c++
#include <iostream>
using namespace std;
int main() {
    auto a=0, b=0;
    cin >> a >> b;
    cout << a+b << endl;
    return 0;
}
~~~

>Java

* 컴파일: javac -J-Xms1024m -J-Xmx1024m -J-Xss512m -encoding UTF-8 Main.java
* 실행: java -Xms1024m -Xmx1024m -Xss512m -Dfile.encoding=UTF-8 Main
* 버전: Java(TM) SE Runtime Environment (build 1.8.0_201-b09)
* 시간 제한: ×2+1초
* 메모리 제한: ×2+16MB
* BOJ 1000번 예제 소스

~~~java
import java.util.*;
public class Main{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int a, b;
		a = sc.nextInt();
		b = sc.nextInt();
		System.out.println(a + b);
	}
}
~~~

>Python 3

* 컴파일: python3 -c "import py_compile; py_compile.compile(r'Main.py')"
* 실행: python3 Main.py
* 버전: Python 3.7.4
* 시간 제한: ×3+2초
* 메모리 제한: ×2+32MB
* BOJ 1000번 예제 소스

~~~python
a, b = map(int, input().split())
print(a+b)
~~~

>C11 

* 컴파일: gcc Main.c -o Main -O2 -Wall -lm -static -std=c11 -DONLINE_JUDGE -DBOJ
* 실행: ./Main
* 버전: gcc (GCC) 8.3.0
* BOJ 1000번 예제 소스
~~~c
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d",&a,&b);
	printf("%d\n",a+b);
	return 0;
}
~~~
* * *