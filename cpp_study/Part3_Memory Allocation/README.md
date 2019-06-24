# Pointer

포인터는 어떤 변수의 메모리 주소를 담는 변수다(32비트 환경에선 4바이트, 64비트 환경에선 8바이트를 차지). <br>
다음 두 연산자는 pointer를 다룰 때 자주 함께 사용된다.

<ul>
  <li>* (de-referencing operator)<br>
  연산자로 사용될 때, pointer변수가 가리키는(reference) 주소에 저장된 값을 가져오는 역할을 한다.</li>
  <li>& (address-of operator)<br>
  사전에 선언된 변수의 주소를 16진수로 가져오는 역할을 한다.</li>
</ul>

## Defining pointer variable
포인터 변수의 자료형태는 해당 주소가 담고 있는 자료형태와 맞춰준다.<br>
생성하는 변수가 포인터변수임을 표현하기 위해서 선언할 자료형 바로 다음에 \*를 붙여줘야 한다. <br>
```
int x = 10;       // To assign the 'address of a variable', definition of that variable must be preceded.
int* ptr_x = &x;  // To assign the 'address of a variable', attach & operator to assign a address.

cout << *ptr_x << endl; // Displays 10(de-referenced the address that ptr_x contains).
cout << *&x << endl;    // Displays 10(de-referenced the address of x).
```

## Pointer operation
```
cout << ptr_x << endl;    // Displays adress of x.
cout << ptr - 1 << endl;  // Displays location one unit left to ptr_x (in this case, ptr_x - 4byte).
cout << ptr + 1 << endl;  // Displays location one unit right to ptr_x (in this case, ptr_x + 4byte).
```

## Various pointers
### (1) Constant pointer
#### Pointer to const value
포인터와 de-referencing operator를 사용하면 포인터가 가리키는 주소에 저장된 값을 바꿀 수 있다.
```
*ptr = 6    // Meaning : store 6 to the address that ptr points (i.e. modify the variable 'value' from 5 to 6)
```
그렇기에 C++에서는 포인터를 사용해서 위와 같이 상수형 변수의 값을 변경하는걸 차단하기 위해 const형 변수의 pointer에는 똑같이 const를 붙이도록 했다. 그렇게 하면 <b>포인터와 \*를 사용해서 변수를 바꾸는 기능이 사라진다.</b>
```
const int value1 = 5;
const int* ptr = &value1; // Attaching const blocks the possibility of 'ptr' changing the value of 'value1'.
//int* ptr_err = &value1; // Throws an error.
```
하지만 그렇기에 포인터가 가리키는 변수 자체를 바꾸는 것은 가능하다.
```
int value1 = 5;
int value2 = 6;
const int* ptr = &value1;  
ptr = &value2;            // Works well, and ptr now points the address of value2(i.e. &ptr returns 6).
```

#### Const pointer
사실 포인터가 가리키는 변수를 바꾸는 기능을 없애는 방법은 따로 있다. 자료형 뒤에 const를 붙이는 것이 그것이다.<br>
따라서, 지금까지의 내용을 정리하면 아래와 같다.
```
int value = 5;                  // A : Modify the value of pointing variable
                                // B : Modify the pointing variable
                                
int* ptr1 = &value;             // Disable nothing
const int* ptr2 = &value;       // Disable A
int* const ptr3 = &value;       // Disable B
const int* const ptr4 = &value; // Disable both A, B
```

### (2) Double pointer
포인터에 대한 포인터 변수를 생성할 때 사용한다.
```
int value = 5;
int *ptr = &value;                  // 'ptr' points address of 'value'
int **ptrptr = &ptr;                // 'ptrptr' points address of 'ptr'

cout << *ptr << &ptr << endl;       // Displays 5 and the address of 'ptr' variable
cout << *ptrptr << &ptrptr << endl; // Displays the address of 'ptr' variable and 'ptrptr' variable
cout << **ptrptr << endl;           // Displays 5
```

### (3) Void pointer


### (4) Null pointer


---

# Memory allocation

Script 파일들을 compile해서 obj파일들이 만들어지고(compile time) 이들이 linking되어 프로그램이 실행된다(runtime).<br>
변수가 메모리에 위 두 시점 중 언제 할당되는가에 따라 정적/동적 메모리할당을 구분한다.

<table align = "center">
<th>time</th>
<th>type</th>
<th>location</th>
<tr>
<td>compile time</td>
<td>static</td>
<td>stack</td></tr>
<tr>
<td>runtime</td>
<td>dynamic</td>
<td>stack / heap</td></tr>
</table>

## Dynamic memory allocation

동적 메모리 할당은 OS로부터 메모리를 받아와 이를 포인터 변수로 지칭하게 하는 것이다. <b>new</b>키워드를 사용한다.
```
int* ptr = new int; // Allocate int size memory and let pointer variable 'ptr' point that location.
*ptr = 7;           // Store 7 in the address that ptr points.
```
stack을 사용할 때와 달리, heap을 사용하면 scope이 끝나도 메모리가 자동으로 반납되지 않는다는 점을 주의해야 한다. 그렇기 때문에 메모리 누수(사용하지 않는 변수가 메모리를 차지하는 현상)를 방지하기 위해 <b>delete</b> 키워드를 따로 사용해준다.
```
delete ptr;
```
