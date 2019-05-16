# Basics
n���� C++ script�� compile�Ǿ� n���� object file���� �����, �� object file���� linking�Ǿ� �ϳ��� executable file�� build�Ѵ�.

## Declaration vs Definition
Declaration�� compiler���� ������ ������ �ִ� ������, �޸� ���� � ������ �� ������ ������ �����ǵ�, �� ������ �̷� �̸����� �θ��ڴٴ� �ǹ̴�. ���� �̸� �տ� &�� �ٿ� ����ϸ� �� �̸��� �����ϴ� ���� �޸� �ּҰ��� Ȯ���� �� �ִ�(ex. cout << &a << endl;). Definition�� ���� �� ������ ���������� � ������ �Ҵ�ȴ�. ������ �����ϸ鼭 �����ϸ� �̸� '������ �ʱ�ȭ�Ѵ�'��� �Ѵ�.

## Header Files
include ���常���� �ٸ� script�� �ִ� name���� ���� ��ũ��Ʈ�� ������ �� �ְ� ���ִ� ����̴�. �ٸ� script�󿡼� ���ǵ� �Լ��� ��ü���� � script���� �ʿ��� ��, �ʿ��� �̸����� Header ���Ͽ� �������ְ� �� Header ������ #include "Header.h"�� ���� ������� �ҷ����� �ȴ�. �̶� Header ������ �����ϸ� #pragma once��� ������ �ڵ����� ���ԵǴµ�, �̴� �� ��ũ��Ʈ���� ���� ��������� include�� ��� �� name�� �ߺ��Ǿ� ����Ǵ� ���� �������ش�. ��� ������ �θ���.

## Visual Studio tip
<ul>
<li>remove vs delete<br>
remove�� Visual Studio�� �����ϴ� ������ �����϶�� ����̰�, delete�� ������ ��¥ �����϶�� ����̴�.</li>
<li>Debug mode vs Release mode<br>
���������� Build�� �� ��� ���� ���� Debug mode�� Release mode�� ������ �� �ִ�. Debug mode�� build�� executable�� Debug�� �ʿ��� ��ɵ��� ���ԵǾ� �־� Release mode�� build�� �ͺ��� �뷮�� ũ�� �ӵ��� �����Ƿ� ������ ���� Debug mode�� ����ϰ�, ������ ���� Release mode�� ����Ѵٰ� �Ѵ�.</li>
<li>Local Windows Debugger<br>
�� ��ȣ ���� �ִ� ������ Ŭ���ϸ� �� �ڸ��� ���� ��(breakpoint)�� �����. �� ���¿��� ����� "Local Windows Debugger"�� Ŭ���ϸ� �� �Լ��� "local scope"�� �� �� �ְ� ���ش�. R�� browser�Լ� ����� �Ѵٰ� �����ϸ� ����ϱ� ���� �� �ϴ�.</li>
<li>How to organize a working directory<br>
Header�� �����ϰ� Script�� �����ϴ� ���� Directory�� ���������� �ִ�. �̷� �� ���������� ���� Directory�� �����ϰ� ���� �� �ִµ�, �׷��� ������ �ع����� ���� Visual Studio�� '����ϴ� �� ������ �����?'��� ������� �Ѵ�. <br>
�׷��� ���������� ������ ���� ����, ������ Solution explorer���� ������ ���ϵ��� "remove"���� ���� ���ο� ������ �� �� ���ϵ��� �����ϰ� drag and drop�� �ش�. Header ������ ���, #include "subfolder/Header.h"ó�� include ���忡�� subfolder�� �̸��� ������ ��θ� ���� �˷���� �Ѵ�.</li>
</ul>