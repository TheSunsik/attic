# Basics
n���� C++ script�� compile�Ǿ� n���� object file���� �����, �� object file���� linking�Ǿ� �ϳ��� executable file�� build�Ѵ�. �� ���¿����� �ǵ��� �´� ���α׷��� ���� �� �ֵ��� C++ script�� �ۼ��ϴ� ���� �ٷ��.

## Basic Vocabulary
<ul>
<li>Declaration vs Definition<br>
Declaration�� compiler���� ������ ������ �ִ� ������, �޸� ���� � ������ �� ������ ������ �����ǵ�, �� ������ �̷� �̸����� �θ��ڴٴ� �ǹ̴�. Definition�� ���� �� ������ ���������� � ������ �Ҵ�ȴ�(��� R�̳� Python������ ���� ���е��� �ʴ� ����). ������ �����ϸ鼭 �����ϸ� �̸� '������ �ʱ�ȭ�Ѵ�'��� �Ѵ�.</li>
<li>Parameter vs Argument<br>
�Լ��� ����/������ �� �� �Լ��� input���� �̷� ���� �޾ƾ� �Ѵٰ� ����ϴ� �� Parameter�� ���ϴ� ���̴�. �� �Լ��� ����� �� parameter �ڸ��� � ���� �ְ� �Ǵµ�, �̰� argument��. ��Ȯ�� ���� ���Ǹ� ���� �˾Ƶ־� �� ����� ����.</li>
<li>Expression vs Statement<br>
���� ���� Expression�ڿ� semicolon�� �Է��ϸ� Statement�� �ȴ�. ���� ���� �����ڰ� ���� R�̳� Python������ ���� ���е��� �ʾҴ� �����̴�.</li>
<li>Operand vs Operator<br>
�̰� ��Ȯ�� ���еǴ� �����ε�, C++������ ���� �����ڰ� �ִ°� Ư���ؼ� ���� ����ߴ�. R�� ifelse�Լ� ����� �ϴ� �������ε�, "�ڷ����� �����̸� = (���ǹ�) ? �� : ����;"�� ���·� ����Ѵ�.</li>
</ul>

## Header Files
���߿� �ʿ��� ��� �Լ����� �ϳ��� script�� ���Ƽ� �����ϴ� ���� ������ ���ؼ���, ������ �������� ���ؼ��� ���� ������ �ƴϴ�. ���� ����� ����� �ϴ� �Լ����� ���� script�� ������ �����ϴ� �۾��� �ʿ��ѵ�, �̸� ���� Header ������ ���ȴ�. Header�� include���Ѽ� �ٸ� script�� �ִ� name���� �ҷ��� �� �ֱ� �����̴�.<br>
�ٸ� script�󿡼� ���ǵ� �Լ��� ��ü���� � script���� �ʿ��� ��, �ʿ��� �̸����� Header ���Ͽ� �������ְ� �� Header ������ #include "Header.h"�� ���� ������� �ҷ����� �ȴ�.<br>
�̶� Header ������ �����ϸ� #pragma once��� ������ �ڵ����� ���ԵǴµ�, �̴� �� name�� �ߺ��Ǿ� ����Ǵ� ���� �������ش�. ��� ������ �θ���.

## Visual Studio tip
<ul>
<li>Debug mode vs Release mode<br>
���������� Build�� �� ��� ���� ���� Debug mode�� Release mode�� ������ �� �ִ�. Debug mode�� build�� executable�� Debug�� �ʿ��� ��ɵ��� ���ԵǾ� �־� Release mode�� build�� �ͺ��� �뷮�� ũ�� �ӵ��� �����Ƿ� ������ ���� Debug mode�� ����ϰ�, ������ ���� Release mode�� ����Ѵٰ� �Ѵ�.</li>
<li>Local Windows Debugger<br>
�� ��ȣ ���� �ִ� ������ Ŭ���ϸ� �� �ڸ��� ���� ��(breakpoint)�� �����. �� ���¿��� ����� "Local Windows Debugger"�� Ŭ���ϸ� �� �Լ��� "local scope"�� �� �� �ְ� ���ش�. R�� browser�Լ� ����� �Ѵٰ� �����ϸ� ����ϱ� ���� �� �ϴ�.</li>
<li>How to organize a working directory<br>
Header�� �����ϰ� Script�� �����ϴ� ���� Directory�� ���������� �ִ�. �̷� �� ���������� ���� Directory�� �����ϰ� ���� �� �ִµ�, �׷��� ������ �ع����� ���� Visual Studio�� '����ϴ� �� ������ �����?'��� ������� �Ѵ�. <br>
�׷��� ���������� ������ ���� ����, ������ Solution explorer���� ������ ���ϵ��� "remove"���� ���� ���ο� ������ �� �� ���ϵ��� �����ϰ� drag and drop�� �ش�. Header ������ ���, #include "subfolder/Header.h"ó�� include ���忡�� subfolder�� �̸��� ������ ��θ� ���� �˷���� �Ѵ�.</li>
</ul>