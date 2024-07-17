/*
������� 5. ����� ���������
��� ����� �������
������� ��������� ���������� ��������� ������������������ �����: 1, 1, 2, 3, 5, 8, 13 � ��� ����� 
(������ ����� ����� 1, ������ ����� ����� 1, � ������ ��������� ����� ����� ���� ����������). 
�������� ���������, ������� �� ������� ������ N ������� N-� ����� ���� ������������������ 
(���� ��� �� ����������� 2 147 483 647, ������� ��). ���������� �������� �����.

������ ����������

������� ����� ������������������: 1
����� � ������������������: 1
������� ����� ������������������: 6
����� � ������������������: 8

������������ �� ����������
� ��������, ��� ������������������ ��������� ������ ����������. ������������ ������ ������ ���������� ����� ����� �� ������������������.
� �������� ��������, ��� ������� ���� if(value > 2147483647) �� ����� ������.

��� �����������
� ����������� ������� �������� ����� �� ������������������ ���������.
� ����� 1 ������������ ��� ������ � ������ ����� ������������������.
*/

#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "������� ����� ������������������: ";
    cin >> n;

    if (n<=0 || n>46){
        cout << "������� ����� �� 0 �� 46" << endl;
    }
    else {
    if (n <=2){
        cout << "����� � ������������������: " << 1;
    }
    else {
            int first = 1;
            int second = 1;
            int counter = 2;

            while (counter < n){
                int t = second;
                second = second + first;
                first = t;
                ++counter;
            }
            cout << "����� � ������������������: " << second << endl;
        }
    }

}