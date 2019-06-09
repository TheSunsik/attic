# Memory allocation
Script들을 compile해서 obj파일들이 만들어지고(compile time)
이게 linking되어 프로그램이 실행된다(runtime)
변수가 메모리에 위 두 시점 중 언제 할당되는가에 따라 정적/동적 메모리할당을 구분한다
<table>
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
