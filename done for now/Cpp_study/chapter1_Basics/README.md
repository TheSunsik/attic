# Basics
n개의 C++ script가 compile되어 n개의 object file들을 만들고, 그 object file들이 linking되어 하나의 executable file을 build한다. 이 강좌에서는 의도에 맞는 프로그램을 만들 수 있도록 C++ script를 작성하는 법을 다룬다.

## Basic Vocabulary
<ul>
<li>Declaration vs Definition<br>
Declaration은 compiler에게 변수의 정보를 주는 행위로, 메모리 상의 어떤 공간에 이 형태의 정보를 담을건데, 그 공간을 이런 이름으로 부르겠다는 의미다. Definition을 통해 그 공간에 실질적으로 어떤 정보가 할당된다(사실 R이나 Python에서는 쉽게 구분되지 않는 개념). 변수를 선언하면서 정의하면 이를 '변수를 초기화한다'라고 한다.</li>
<li>Parameter vs Argument<br>
함수를 선언/정의할 때 이 함수는 input으로 이런 값을 받아야 한다고 명시하는 건 Parameter를 정하는 것이다. 그 함수를 사용할 때 parameter 자리에 어떤 값을 넣게 되는데, 이게 argument다. 정확한 개념 정의를 위해 알아둬야 할 용어라고 생각.</li>
<li>Expression vs Statement<br>
쉽게 말해 Expression뒤에 semicolon을 입력하면 Statement가 된다. 역시 문장 구분자가 없는 R이나 Python에서는 쉽게 구분되지 않았던 개념이다.</li>
<li>Operand vs Operator<br>
이건 명확히 구분되는 개념인데, C++에서는 삼항 연산자가 있는게 특이해서 따로 언급했다. R의 ifelse함수 기능을 하는 연산자인데, "자료형태 변수이름 = (조건문) ? 참 : 거짓;"의 형태로 사용한다.</li>
</ul>

## Header Files
개발에 필요한 모든 함수들을 하나의 script에 몰아서 정의하는 것은 협업을 위해서든, 차후의 가독성을 위해서든 좋은 습관은 아니다. 따라서 비슷한 기능을 하는 함수들을 여러 script로 나눠서 정의하는 작업이 필요한데, 이를 위해 Header 파일이 사용된다. Header를 include시켜서 다른 script에 있는 name들을 불러올 수 있기 때문이다.<br>
다른 script상에서 정의된 함수나 객체들이 어떤 script에서 필요할 때, 필요한 이름들을 Header 파일에 선언해주고 그 Header 파일을 #include "Header.h"와 같은 방식으로 불러오면 된다.<br>
이때 Header 파일을 생성하면 #pragma once라는 문구가 자동으로 삽입되는데, 이는 한 name이 중복되어 선언되는 것을 방지해준다. 헤더 가드라고 부른다.

## Visual Studio tip
<ul>
<li>Debug mode vs Release mode<br>
실행파일을 Build할 때 상단 탭을 통해 Debug mode나 Release mode를 선택할 수 있다. Debug mode로 build한 executable은 Debug에 필요한 기능들이 포함되어 있어 Release mode로 build한 것보다 용량도 크고 속도도 느리므로 개발할 때만 Debug mode를 사용하고, 배포할 때는 Release mode를 사용한다고 한다.</li>
<li>Local Windows Debugger<br>
줄 번호 옆에 있는 공간을 클릭하면 그 자리에 빨간 점(breakpoint)이 생긴다. 그 상태에서 상단의 "Local Windows Debugger"를 클릭하면 그 함수의 "local scope"로 들어갈 수 있게 해준다. R의 browser함수 기능을 한다고 생각하면 기억하기 좋을 듯 하다.</li>
<li>How to organize a working directory<br>
Header도 생성하고 Script도 생성하다 보면 Directory가 지저분해져 있다. 이럴 땐 하위폴더를 만들어서 Directory를 정리하고 싶을 수 있는데, 그렇게 정리만 해버리면 정작 Visual Studio가 '사용하던 이 파일이 어디갔지?'라며 어리둥절해 한다. <br>
그래서 하위폴더에 정리를 해준 다음, 우측의 Solution explorer에서 기존의 파일들을 "remove"해준 다음 새로운 폴더로 들어간 그 파일들을 적절하게 drag and drop해 준다. Header 파일의 경우, #include "subfolder/Header.h"처럼 include 문장에서 subfolder의 이름을 포함한 경로를 같이 알려줘야 한다.</li>
</ul>