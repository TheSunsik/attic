이 폴더에서는 변수의 분류와 종류에 대해서 다루고, 설명한 여러 변수를 가지고 쓸 수 있는 여러 연산자들의 종류에 대해 다룬다. 이 중 변수와 연산자들의 종류는 executive 파일에 정리했다.

# Local/Global variable
C++공식 문서는 scope와 duration을 아래와 같이 정의한다<br>

<ul>
  <li>An identifier’s <b>scope</b> determines where it is accessible. An identifier that is out of scope can not be accessed.</li>
  <li>A variable’s <b>duration</b> determines when it is created and destroyed.</li>
</ul>

예를 들어, 한 변수를 선언하면 어떤 메모리가 담을 수 있는 정보의 종류와 그 메모리의 이름이 결정되고, 정의하면 비로소 메모리가 사용된다. 만약 변수 cpp를 중괄호 안에 정의했을 때, 그 중괄호를 벗어나면 cpp가 사용하던 메모리는 반납된다. 변수가 존재한다는 것을 실체가 있는(즉, 할당받은 메모리에 정보를 담은) 것으로 정의할 때, 중괄호 밖에서는 cpp변수가 사라졌다고 할 수 있다(그렇기에 접근할 수도 없다). 따라서 cpp의 scope와 duration은 모두 그 중괄호 내부였음을 알 수 있다.

## Local variable
local scope에서 정의된 변수를 말한다(쉽게 말해 중괄호 안에서 정의된 변수). 이 변수의 특징은 <b>linkage</b>가 없다는 것인데, 이는 이 변수가 정의된 영역 외에서는 이 변수를 사용할 수 없다는 것을 의미한다. 그렇기에 한 지역변수의 duration은 그 변수가 정의된 중괄호 안임을 알 수 있다. 참고사항 몇 가지를 추가한다.<br>

<ul>
  <li>더 큰 scope에서 선언된 변수는 더 작은 scope에서도 사용할 수 있다. 즉, {여기서 선언하면 {여기서도 사용할 수 있다}}.</li>
  <li>같은 이름의 변수를 {여기서도, {여기서도 정의하면} 여기서 정의한 변수는 hiding된다}(name hiding).</li>
</ul>



## Global variable
global scope에서 정의된 변수를 말한다(쉽게 말해 모든 중괄호 밖에서 정의된 변수). 참고로, 한 변수를 한 스크립트 내 어느 영역에서도 사용할 수 있다면 내부 연결(<b>internal linkage</b>)이 있다고 하고, 여러 스크립트에 걸쳐서 사용할 수 있다면 외부 연결(<b>external linkage</b>)이 있다고 한다. 참고사항 몇 가지를 추가한다.<br>

<ul>
  <li>내부 연결만 있는 변수는 정적 변수(<b>static variable</b>)다. static이라는 키워드를 사용해 정의한다.<br>
    (ex) static int year = 2019; // 외부 스크립트에서는 year가 보이지 않게 된다(즉, scope를 이 스크립트로 제한한다).<br>
  - 정적 변수는 local scope에서 정의해도 그 정보가 사라지지 않는다(즉, scope와 duration이 다를 수 있는 변수다).<br>
  - 정적 변수가 초기화된 영역을 여러번 불러와도 정적 변수는 한번만 초기화된다. 그렇기에 초기화가 필수적이다. </li>
  
  <li>지역변수는 전역변수를 hiding한다. local scope에서 전역변수를 사용하려면 ::(<b>scope resolution operator</b>)를 사용한다.</li>
  
  <li>변수의 duration은 최대한 줄이는게 좋다. 사용되는 곳 근처에서만 존재하도록 하면 메모리를 아낄 수 있기 때문이다.<br>
  (즉, 특별한 이유가 없으면 왠만하면 지역변수를 사용하는 게 좋다). </li>
</ul>

### Using external linkage
다른 스크립트에 있는 전역 변수를 이 스크립트에서 사용하려면 <b>extern</b> 키워드를 사용해서 그 변수를 선언하면 된다(ex. extern int global_a; 본격 사용하기 전에 선언을 한다는 의미에서 <b>forward declaration</b>이라고 함). 이는 '컴파일을 할 때 어떤 다른 cpp파일의 어딘가에 이 함수의 몸체가 있으니까 링킹해서 갖다 붙여서 사용하라'는 의미를 전달하는 역할을 한다. 당연히 다른 스크립트에 있는 함수도 extern 키워드를 사용해서 불러올 수 있다(헤더로 할 수 있는 일이긴 하지만). 참고사항 몇 가지를 추가한다.<br>

<ul>
  <li>다른 스크립트에서 같은 이름으로 초기화를 두번 하면 프로그램 전체적으로는 같은 이름의 변수가 두개 존재하게 된다. 따라서 컴파일은 되지만 링킹에러가 발생한다.</li>
  
  <li>여러 스크립트에 걸쳐 사용하려는 변수가 있으면 header에 정의하기보단, 한 스크립트에 전역변수로 정의하고 header에서는 extern 키워드를 사용해 선언만 해주는 것이 좋다. header를 include시키는 과정에서 변수를 중복으로 정의해 메모리를 낭비하는 것을 막을 수 있기 때문이다.</li>
</ul>

# namespace
이름을 동일하게 사용하면 스크립트의 가독성을 높일 수 있는 경우도 있다(ex. eat이라는 함수를 배고픈 상황-hungry, 배부른 상황-full에서 정의할 때). 그럴 때 사용하는 것이 namespace다. 그냥 eat 함수를 사용하면 hungry의 eat을 쓸지 full의 eat을 쓸지가 애매하니까(ambiguity) ::를 붙여서 애매함을 해소하기도 한다. 하지만 이 역시 번거로운 타이핑을 수반하므로 <b>using</b> 키워드를 사용해 일일이 ::를 붙여 namespace를 지정해주는 불편을 해소한다. using 키워드를 사용할 때 주의사항 몇 가지를 추가한다.<br>

<ul>
  <li>한 영역에서 hungry랑 full을 둘 다 using한 후 eat함수를 사용하면 또다시 eat이 ambiguous해지므로 error가 발생한다. 이때는 상황에 맞게 scope resolution operator를 사용해서 해결할 수 있다(여기선 hungry::eat(), 저기선 full::eat()이런식으로).</li>
  
  <li>근데 ::를 굳이 안써야겠다고 하면 영역지정을 정확하게 해주는 방법도 있다. 즉, {이걸로 싸고 여기 안에선 using namespace hungry} {여기 안에선 using namespace full} 이런 식으로 명시를 해줘야 한다는 말.</li>
  
  <li>한 scope에서 using namespace를 하면 그것보다 작은 범위에도 영향을 미친다(즉, {using namespace hungry 하고 {using namespace full를 하면 여기선 hungry랑 full namespace를 다 쓰고 있는 셈}}). 또한 이는 한번 실행하면 취소할 수 없는 문장이다. 그러므로 using namespace를 header에 쓰는건 그 헤더를 포함시키는 모든 cpp파일의 모든 영역에 영향을 주기때문에 위험하다. 가급적 적은 범위에 영향을 미치도록 프로그래밍하는게 좋다.</li>
</ul>