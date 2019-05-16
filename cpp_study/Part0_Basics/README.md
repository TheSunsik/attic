# Basics
n개의 C++ script가 compile되어 n개의 object file들을 만들고, 그 object file들이 linking되어 하나의 executable file을 build한다.

## Declaration vs Definition
Declaration은 compiler에게 변수의 정보를 주는 행위로, 메모리 상의 어떤 공간에 이 형태의 정보를 담을건데, 그 공간을 이런 이름으로 부르겠다는 의미다. 변수 이름 앞에 &를 붙여 출력하면 그 이름에 대응하는 실제 메모리 주소값을 확인할 수 있다(ex. cout << &a << endl;). Definition을 통해 그 공간에 실질적으로 어떤 정보가 할당된다. 변수를 선언하면서 정의하면 이를 '변수를 초기화한다'라고 한다.

## Header Files
include 문장만으로 다른 script에 있는 name들을 현재 스크립트에 선언할 수 있게 해주는 기능이다. 다른 script상에서 정의된 함수나 객체들이 어떤 script에서 필요할 때, 필요한 이름들을 Header 파일에 선언해주고 그 Header 파일을 #include "Header.h"와 같은 방식으로 불러오면 된다. 이때 Header 파일을 생성하면 #pragma once라는 문구가 자동으로 삽입되는데, 이는 한 스크립트에서 여러 헤더파일을 include할 경우 한 name이 중복되어 선언되는 것을 방지해준다. 헤더 가드라고 부른다.

## Visual Studio tip
<ul>
<li>remove vs delete<br>
remove는 Visual Studio가 존재하는 파일을 무시하라는 명령이고, delete는 파일을 진짜 삭제하라는 명령이다.</li>
<li>Debug mode vs Release mode<br>
실행파일을 Build할 때 상단 탭을 통해 Debug mode나 Release mode를 선택할 수 있다. Debug mode로 build한 executable은 Debug에 필요한 기능들이 포함되어 있어 Release mode로 build한 것보다 용량도 크고 속도도 느리므로 개발할 때만 Debug mode를 사용하고, 배포할 때는 Release mode를 사용한다고 한다.</li>
<li>Local Windows Debugger<br>
줄 번호 옆에 있는 공간을 클릭하면 그 자리에 빨간 점(breakpoint)이 생긴다. 그 상태에서 상단의 "Local Windows Debugger"를 클릭하면 그 함수의 "local scope"로 들어갈 수 있게 해준다. R의 browser함수 기능을 한다고 생각하면 기억하기 좋을 듯 하다.</li>
<li>How to organize a working directory<br>
Header도 생성하고 Script도 생성하다 보면 Directory가 지저분해져 있다. 이럴 땐 하위폴더를 만들어서 Directory를 정리하고 싶을 수 있는데, 그렇게 정리만 해버리면 정작 Visual Studio가 '사용하던 이 파일이 어디갔지?'라며 어리둥절해 한다. <br>
그래서 하위폴더에 정리를 해준 다음, 우측의 Solution explorer에서 기존의 파일들을 "remove"해준 다음 새로운 폴더로 들어간 그 파일들을 적절하게 drag and drop해 준다. Header 파일의 경우, #include "subfolder/Header.h"처럼 include 문장에서 subfolder의 이름을 포함한 경로를 같이 알려줘야 한다.</li>
</ul>