#include <stdio.h>
#include <string.h>

void reverseArray(char arr[], int length);

int main() {
    char letters[] = { 'o','k','a','y','a','m','a','\0' };
    int length = strlen(letters);

    reverseArray(letters, length);
    printf("�z��̒l���t���ɕ��ёւ��Đ擪����\�����܂��B\n%s", letters);

    return 0;
}
void reverseArray(char arr[], int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}